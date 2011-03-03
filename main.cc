// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include <boost/smart_ptr.hpp>
#include <cstdio>
#include "base/types.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "softfloat/softfloatfast.h"
#include "debugger/ptracedebugger.h"
#include "debugger/instructionprint.h"
#include "debugger/floatinstructions.h"
#include "profiler/printfloatingoperations.h"

using boost::shared_ptr;
using boost::scoped_ptr;

namespace floatprof {

bool test_main() {
  scoped_ptr<PtraceDebugger> debugger(new PtraceDebugger());
  if (debugger->Init())
    return 1;

  shared_ptr<InstructionObserver> print_instr(new PrintInstructions());
  debugger->addObserver(print_instr);

  shared_ptr<FloatInstructions> float_instr(new FloatInstructions());
  debugger->addObserver(float_instr);

  shared_ptr<PrintFloatingOperations> print_fl(new PrintFloatingOperations());
  float_instr->addObserver(print_fl);

  char *const args[] = {"./asm_test", NULL };
  if (debugger->Run(args))
    return 1;

  return 0;
}

}  // namespace floatprof

int main(int argc, char *argv[]) {
  if (argc > 1 && strncmp(argv[1], "--gtest", 7) == 0) {
    testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
  }
  return floatprof::test_main();
}
