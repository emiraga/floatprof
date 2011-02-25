// Copyright 2011, Emir Habul <emiraga@gmail.com>
#ifndef SOFTFLOAT_SOFTFLOAT_INTERFACE_H_
#define SOFTFLOAT_SOFTFLOAT_INTERFACE_H_

#include "base/types.h"

namespace floatprof {
#ifndef SOFTFLOAT_BITS64_SOFTFLOAT_H
// Simplified version of
// #include "softfloat/softfloat/bits64/386-Win32-GCC/softfloat.h"
typedef unsigned int float32;
typedef unsigned long long float64;//NOLINT
typedef struct {
    unsigned long long low;//NOLINT
    unsigned short high;//NOLINT
} floatx80;
typedef struct {
    unsigned long long low, high;//NOLINT
} float128;
#endif  // SOFTFLOAT_BITS64_SOFTFLOAT_H

class SoftFloatInterface {
 public:
  virtual ~SoftFloatInterface() = 0;
  virtual Float add32(Float, Float) = 0;
  virtual Double add64(Double, Double) = 0;
  virtual LongDouble addx80(LongDouble, LongDouble) = 0;
  virtual float128 add128(float128, float128) = 0;
};
}  // namespace floatprof

#endif  // SOFTFLOAT_SOFTFLOAT_INTERFACE_H_
