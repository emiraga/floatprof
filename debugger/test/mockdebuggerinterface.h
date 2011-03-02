// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef DEBUGGER_TEST_MOCKDEBUGGERINTERFACE_H_
#define DEBUGGER_TEST_MOCKDEBUGGERINTERFACE_H_

#include "debugger/debuggerinterface.h"
#include "gmock/gmock.h"

namespace floatprof {
class MockDebuggerInterface : public DebuggerInterface {
 public:
  MOCK_METHOD0(Init, int());
  MOCK_METHOD1(Run, int(char *const *args));
};
}  // namespace floatprof

#endif  // DEBUGGER_TEST_MOCKDEBUGGERINTERFACE_H_
