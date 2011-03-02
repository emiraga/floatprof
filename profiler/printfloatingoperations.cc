// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "profiler/printfloatingoperations.h"
#include <cstdio>

namespace floatprof {

PrintFloatingOperations::PrintFloatingOperations() {
}

void PrintFloatingOperations::addx80(LongDouble a, LongDouble b) {
  printf("FLOAT_OP: %Lf + %Lf = %Lf\n",
         a.native, b.native, a.native + b.native);
}

}  // namespace floatprof
