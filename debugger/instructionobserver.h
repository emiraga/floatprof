// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef DEBUGGER_INSTRUCTIONOBSERVER_H_
#define DEBUGGER_INSTRUCTIONOBSERVER_H_

#include "base/types.h"
#include "debugger/memoryreader.h"

namespace floatprof {
class InstructionObserver {
 public:
  virtual ~InstructionObserver() {}

  virtual void notifyInstruction(MemoryReader *usermemory) = 0;
};
}  // namespace floatprof

#endif  // DEBUGGER_INSTRUCTIONOBSERVER_H_
