// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef PROFILER_FLOATINGOBSERVER_H_
#define PROFILER_FLOATINGOBSERVER_H_

#include "base/types.h"

namespace floatprof {

class FloatingObserver {
 public:
  virtual ~FloatingObserver() {}
  virtual void addx80(LongDouble a, LongDouble b) = 0;
};

}  // namespace floatprof

#endif  // PROFILER_FLOATINGOBSERVER_H_
