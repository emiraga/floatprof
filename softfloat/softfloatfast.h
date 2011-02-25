// Copyright 2011, Emir Habul <emiraga@gmail.com>
#ifndef SOFTFLOAT_SOFTFLOATFAST_H_
#define SOFTFLOAT_SOFTFLOATFAST_H_

#include "softfloat/softfloat_interface.h"

namespace floatprof {
class SoftFloatFast : public SoftFloatInterface {
 public:
  SoftFloatFast();
  virtual Float add32(Float a, Float b);
  virtual Double add64(Double a, Double b);
  virtual LongDouble addx80(LongDouble, LongDouble);
  virtual float128 add128(float128 a, float128 b);
};
}  // namespace

#endif  // SOFTFLOAT_SOFTFLOATFAST_H_
