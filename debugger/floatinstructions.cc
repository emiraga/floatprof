// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "debugger/floatinstructions.h"

#include <cstdio>
#include <cassert>

namespace floatprof {

FloatInstructions::FloatInstructions() { }

void FloatInstructions::notifyInstruction(MemoryReader *user) {
  // Get current instruction from debugee
  Instruction instruction = user->current_instruction();
  uint8_t opc = instruction.ccp.opc;
  uint8_t mod = instruction.ccp.mod;
  uint8_t eopc = instruction.ccp.eopc;
  uint8_t regm = instruction.ccp.regm;
  void *pointer = instruction.ccp.pointer;

  bool valid_eopc = (eopc == 0 || eopc == 4 || eopc == 5);

  if (!valid_eopc)
    return;

  if (opc == 0xD8 && mod == 0) {
    // fadd dword [addr]
    found_add(user->get_fx80_from_st(0), user->get_f32(pointer), eopc);
  } else if (opc == 0xDC && mod == 0) {
    // fadd qword [addr]
    found_add(user->get_fx80_from_st(0), user->get_f64(pointer), eopc);
  } else if (opc == 0xD8 && mod == 3) {
    // fadd st0, stN
    found_add(user->get_fx80_from_st(0), user->get_fx80_from_st(regm), eopc);
  } else if (opc == 0xDC && mod == 3) {
    // fadd stN, st0
    if (eopc) eopc ^= 1;  // transform eopc for inverse operations
    found_add(user->get_fx80_from_st(regm), user->get_fx80_from_st(0), eopc);
  } else if (opc == 0xDE && mod == 3) {
    // faddp [stN]
    if (eopc) eopc ^= 1;  // transform eopc for inverse operations
    found_add(user->get_fx80_from_st(regm), user->get_fx80_from_st(0), eopc);
  } else if (opc == 0xDA && mod == 0) {
    // fiadd dword [addr]
    found_add(user->get_fx80_from_st(0), user->get_uint32(pointer), eopc);
  } else if (opc == 0xDE && mod == 0) {
    // fiadd word [addr]
    found_add(user->get_fx80_from_st(0), user->get_uint16(pointer), eopc);
  }
}

template<class FT>
void FloatInstructions::found_add(LongDouble a, FT b_t, int eopc) {
  LongDouble b(b_t.native);

  switch (eopc) {
  case 4:  // subtraction
    notifyObserversAdd(a, LongDouble(-b.native));
    return;
  case 5:  // reverse substraction
    notifyObserversAdd(b, LongDouble(-a.native));
    return;
  case 0:  // addition
    notifyObserversAdd(a, b);
    return;
  }
}

}  // namespace floatprof
