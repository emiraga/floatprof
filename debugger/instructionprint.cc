// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "debugger/instructionprint.h"
#include <cstdio>

namespace floatprof {
InstructionPrint::InstructionPrint() {
}

void InstructionPrint::notifyInstruction(const Instruction &instruction) {
  printf("Here is one!\n");
}
}
