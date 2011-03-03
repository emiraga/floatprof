// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "profiler/printfloatingoperations.h"
#include "gtest/gtest.h"

namespace floatprof {

TEST(PrintFloatingOperations, printing) {
  PrintFloatingOperations print;
  print.addx80(LongDouble(0.0L), LongDouble(0.0L));
}

}  // namespace floatprof
