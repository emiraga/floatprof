// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include <boost/smart_ptr.hpp>
#include <cstdio>
#include "base/types.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "softfloat/softfloatfast.h"
#include "debugger/ptracedebugger.h"
#include "debugger/instructionprint.h"

using boost::shared_ptr;
using boost::scoped_ptr;

namespace floatprof {
bool test_main() {
  scoped_ptr<PtraceDebugger> debugger(new PtraceDebugger());
  if (debugger->Init())
    return 1;

  shared_ptr<InstructionObserver> printer(new InstructionPrint());
  debugger->addObserver(printer);

  char *const args[] = {"./asm_test", NULL };
  if (debugger->Run(args))
    return 1;
}
}  // namespace floatprof

int main(int argc, char *argv[]) {
  testing::InitGoogleMock(&argc, argv);
  if (RUN_ALL_TESTS())
    return 1;

  return floatprof::test_main();
}
