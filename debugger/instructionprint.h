// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef DEBUGGER_INSTRUCTIONPRINT_H_
#define DEBUGGER_INSTRUCTIONPRINT_H_

#include "base/types.h"
#include "debugger/instructionobserver.h"

namespace floatprof {
class PrintInstructions : public InstructionObserver {
 public:
  PrintInstructions();
  virtual ~PrintInstructions() {}

  virtual void notifyInstruction(MemoryReader *usermemory);
  void printToString(const uint8_t *instr, char *out, int buflen);
};
}  // namespace floatprof

#endif  // DEBUGGER_INSTRUCTIONPRINT_H_
