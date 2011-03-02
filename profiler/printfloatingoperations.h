// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef PROFILER_PRINTFLOATINGOPERATIONS_H_
#define PROFILER_PRINTFLOATINGOPERATIONS_H_

#include "profiler/floatingobserver.h"

namespace floatprof {

class PrintFloatingOperations : public FloatingObserver {
 public:
    PrintFloatingOperations();
    virtual void addx80(LongDouble a, LongDouble b);
};

}  // namespace floatprof

#endif  // PROFILER_PRINTFLOATINGOPERATIONS_H_
