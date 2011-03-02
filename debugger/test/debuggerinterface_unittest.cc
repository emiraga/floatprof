// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "debugger/debuggerinterface.h"
#include "debugger/test/mockinstructionobserver.h"
#include "debugger/test/mockdebuggerinterface.h"
#include "gtest/gtest.h"

namespace floatprof {

TEST(DebuggerInterfaceTest, Observers) {
  shared_ptr<MockInstructionObserver> observer(new MockInstructionObserver());
  EXPECT_CALL(*observer, notifyInstruction(NULL)).Times(1);
  MockDebuggerInterface debug;
  debug.addObserver(observer);
  debug.notifyObservers(NULL);  // 1 notification
  observer.reset();
  debug.notifyObservers(NULL);  // no notifications
}

}  // namespace floatprof
