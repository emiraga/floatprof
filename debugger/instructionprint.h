// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef DEBUGGER_INSTRUCTIONPRINT_H_
#define DEBUGGER_INSTRUCTIONPRINT_H_

#include "base/types.h"
#include "debugger/instructionobserver.h"

namespace floatprof {
class InstructionPrint : public InstructionObserver {
 public:
  InstructionPrint();
  virtual ~InstructionPrint() {}

  virtual void notifyInstruction(const Instruction &);
};
}  // namespace floatprof

#endif  // DEBUGGER_INSTRUCTIONPRINT_H_
