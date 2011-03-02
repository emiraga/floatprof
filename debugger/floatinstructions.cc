// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "debugger/floatinstructions.h"

#include <cstdio>
#include <cassert>

namespace {
template<class FT1, class FT2>
void profile_add(FT1 op1, FT2 op2, int eopc) {
/*
  if(eopc == 4) {
    //subtraction
    profile_add(op1, -op2, 0);
    return;
  }
  else if(eopc == 5) {
    //reverse substraction
    profile_add(op2, -op1, 0);
    return;
  }
*/
  printf("%lf + %lf (%d)\n", static_cast<double>(op1.native),
         static_cast<double>(op2.native), eopc);
}


template<class FT1>
void profile_add(FT1 op1, uint32_t op2, int eopc) {
  printf("%lf + %lf (%d)\n", static_cast<double>(op1.native),
         static_cast<double>(op2), eopc);
}

}  // unnamed namespace

namespace floatprof {

FloatInstructions::FloatInstructions() {
}

void FloatInstructions::notifyInstruction(MemoryReader *user) {
  // Get current instruction from debugee
  Instruction instruction = user->current_instruction();
  uint8_t opc = instruction.ccp.opc;
  uint8_t mod = instruction.ccp.mod;
  uint8_t eopc = instruction.ccp.eopc;
  uint8_t regm = instruction.ccp.regm;
  void *pointer = instruction.ccp.pointer;

  bool valid_eopc = (eopc == 0 || eopc == 4 || eopc == 5);
  const char *fnemonic[] = {"ADD", NULL, NULL, NULL, "SUB", "SUBR"};

  int candidate = 0;
  // fadd dword [addr]
  if (opc == 0xD8 && valid_eopc && mod == 0) {
    printf("F%s m32fp ", fnemonic[eopc]);
    candidate++;
    profile_add(user->get_fx80_from_st(0), user->get_f32(pointer), eopc);
  }
  // fadd qword [addr]
  if (opc == 0xDC && valid_eopc && mod == 0) {
    printf("F%s m64fp ", fnemonic[eopc]);
    candidate++;
    profile_add(user->get_fx80_from_st(0), user->get_f64(pointer), eopc);
  }
  // fadd st0, stN
  if (opc == 0xD8 && valid_eopc && mod == 3) {
    printf("F%s st0,st%d ", fnemonic[eopc], regm);
    candidate++;
    profile_add(user->get_fx80_from_st(0), user->get_fx80_from_st(regm), eopc);
  }
  // fadd stN, st0
  if (opc == 0xDC && valid_eopc && mod == 3) {
    printf("F%s st%d,st0 ", fnemonic[eopc], regm);
    candidate++;
    profile_add(user->get_fx80_from_st(regm), user->get_fx80_from_st(0), eopc);
  }
  // faddp [stN]
  if (opc == 0xDE && valid_eopc && mod == 3) {
    printf("F%s st%d, st0 ", fnemonic[eopc], regm);
    candidate++;
    profile_add(user->get_fx80_from_st(regm), user->get_fx80_from_st(0), eopc);
  }
  // fiadd dword [addr]
  if (opc == 0xDA && valid_eopc && mod == 0) {
    printf("FI%s m32int ", fnemonic[eopc]);
    candidate++;
    profile_add(user->get_fx80_from_st(0), user->get_uint32(pointer), eopc);
  }
  // fiadd word [addr]
  if (opc == 0xDE && valid_eopc && mod == 0) {
    printf("FI%s m16int ", fnemonic[eopc]);
    candidate++;
    profile_add(user->get_fx80_from_st(0), user->get_uint32(pointer), eopc);
  }
  assert(candidate < 2);
}

}  // namespace floatprof
