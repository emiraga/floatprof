// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "debugger/instructionprint.h"
#include <cstdio>

namespace nasm {

extern "C" {
#include "nasm/insns.h"
#include "nasm/nasm.h"
#include "nasm/nasmlib.h"
#include "nasm/sync.h"
#include "nasm/disasm.h"
}

}  // namespace nasm

namespace floatprof {
InstructionPrint::InstructionPrint() {
}

void InstructionPrint::notifyInstruction(MemoryReader *usermemory) {
  Instruction instr = usermemory->current_instruction();
  char output[256] = {0};
  printToString(instr.opcode8, output, sizeof(output));
  printf("[%02x %02x %02x %02x %02x %02x %02x %02x %02x] %s\n",
         instr.opcode8[0], instr.opcode8[1], instr.opcode8[2],
         instr.opcode8[3], instr.opcode8[4], instr.opcode8[5],
         instr.opcode8[6], instr.opcode8[7], instr.opcode8[8],
         output);
}

void InstructionPrint::printToString(const uint8_t *instr, char *output,
                                     int buffer_length) {
  nasm::disasm(const_cast<uint8_t*>(instr), output, buffer_length,
               32, 0, false, 0);
}

}  // namespace floatprof
