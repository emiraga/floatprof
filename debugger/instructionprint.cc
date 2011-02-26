// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "debugger/instructionprint.h"
#include <cstdio>

namespace {
extern "C" {
#include "nasm/insns.h"
#include "nasm/nasm.h"
#include "nasm/nasmlib.h"
#include "nasm/sync.h"
#include "nasm/disasm.h"
}
}

namespace floatprof {
InstructionPrint::InstructionPrint() {
}

void InstructionPrint::notifyInstruction(const Instruction &instr) {
  char output[256] = {0};
  printf("[%02x %02x %02x %02x %02x %02x %02x %02x %02x] ",
         instr.opcode[0], instr.opcode[1], instr.opcode[2],
         instr.opcode[3], instr.opcode[4], instr.opcode[5],
         instr.opcode[6], instr.opcode[7], instr.opcode[8]);

  disasm(const_cast<uint8_t*>(instr.opcode),
         output, sizeof(output), 32, 0, false, 0);
  puts(output);
}
}
