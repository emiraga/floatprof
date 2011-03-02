// Copyright 2011, Emir Habul <emiraga@gmail.com>
#ifndef SOFTFLOAT_SOFTFLOAT_INTERFACE_H_
#define SOFTFLOAT_SOFTFLOAT_INTERFACE_H_

#include "base/types.h"

namespace floatprof {
class SoftFloatInterface {
 public:
  virtual ~SoftFloatInterface() {}
  virtual Float add32(Float, Float) = 0;
  virtual Double add64(Double, Double) = 0;
  virtual LongDouble addx80(LongDouble, LongDouble) = 0;
};
}  // namespace floatprof

#endif  // SOFTFLOAT_SOFTFLOAT_INTERFACE_H_
