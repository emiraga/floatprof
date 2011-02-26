// Copyright 2011, Emir Habul <emiraga@gmail.com>
#ifndef SOFTFLOAT_SOFTFLOAT_INTERFACE_H_
#define SOFTFLOAT_SOFTFLOAT_INTERFACE_H_

#include "base/types.h"

namespace floatprof {
#ifndef SOFTFLOAT_BITS64_SOFTFLOAT_H
// Simplified version of
// #include "softfloat/softfloat/bits64/386-Win32-GCC/softfloat.h"
// This is code from another project, should not be changed just to pass LINT
typedef unsigned int float32;
typedef unsigned long long float64;  // NOLINT(runtime/int)
typedef struct {
    unsigned long long low;  // NOLINT(runtime/int)
    unsigned short high;  // NOLINT(runtime/int)
} floatx80;
typedef struct {
    unsigned long long low, high;  // NOLINT(runtime/int)
} float128;
#endif  // SOFTFLOAT_BITS64_SOFTFLOAT_H

class SoftFloatInterface {
 public:
  virtual ~SoftFloatInterface() {}
  virtual Float add32(Float, Float) = 0;
  virtual Double add64(Double, Double) = 0;
  virtual LongDouble addx80(LongDouble, LongDouble) = 0;
};
}  // namespace floatprof

#endif  // SOFTFLOAT_SOFTFLOAT_INTERFACE_H_
