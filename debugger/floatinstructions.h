// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef DEBUGGER_FLOATINSTRUCTIONS_H_
#define DEBUGGER_FLOATINSTRUCTIONS_H_

#include "debugger/instructionobserver.h"

namespace floatprof {
class FloatInstructions : public InstructionObserver {
 public:
  FloatInstructions();
  virtual void notifyInstruction(MemoryReader *usermemory);
};

}  // namespace floatprof
#endif  // DEBUGGER_FLOATINSTRUCTIONS_H_
