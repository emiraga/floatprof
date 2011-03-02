// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef DEBUGGER_TEST_MOCKINSTRUCTIONOBSERVER_H_
#define DEBUGGER_TEST_MOCKINSTRUCTIONOBSERVER_H_

#include "gmock/gmock.h"
#include "debugger/instructionobserver.h"

namespace floatprof {

class MockInstructionObserver : public InstructionObserver {
 public:
  MOCK_METHOD1(notifyInstruction,
      void(MemoryReader *usermemory));
};

}  // namespace floatprof

#endif  // DEBUGGER_TEST_MOCKINSTRUCTIONOBSERVER_H_
