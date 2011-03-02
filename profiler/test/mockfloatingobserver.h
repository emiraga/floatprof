// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef PROFILER_TEST_MOCKFLOATINGOBSERVER_H_
#define PROFILER_TEST_MOCKFLOATINGOBSERVER_H_

#include "profiler/floatingobserver.h"
#include "gmock/gmock.h"

namespace floatprof {

class MockFloatingObserver : public FloatingObserver {
 public:
  MOCK_METHOD2(addx80, void(LongDouble a, LongDouble b));
};

}  // namespace floatprof

#endif  // PROFILER_TEST_MOCKFLOATINGOBSERVER_H_
