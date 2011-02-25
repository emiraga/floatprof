// Copyright 2011, Emir Habul <emiraga@gmail.com>

extern "C" {
#include "softfloat/softfloat/bits64/386-Win32-GCC/softfloat.h"
}
#define SOFTFLOAT_BITS64_SOFTFLOAT_H
#include "softfloat/softfloatfast.h"

namespace floatprof {

#define SOFTFLOAT_CONVERT(From, To)       \
  inline To convert(const From &val) { \
    return *reinterpret_cast<const To*>(&val);       \
  }

  SOFTFLOAT_CONVERT(Float, float32);
  SOFTFLOAT_CONVERT(float32, Float);
  SOFTFLOAT_CONVERT(Double, float64);
  SOFTFLOAT_CONVERT(float64, Double);
  SOFTFLOAT_CONVERT(LongDouble, floatx80);
  SOFTFLOAT_CONVERT(floatx80, LongDouble);
#undef SOFTFLOAT_CONVERT_TO

SoftFloatFast::SoftFloatFast() {
}

Float SoftFloatFast::add32(Float a, Float b) {
  return convert(float32_add(convert(a), convert(b)));
}

Double SoftFloatFast::add64(Double a, Double b) {
  return convert(float64_add(convert(a), convert(b)));
}

LongDouble SoftFloatFast::addx80(LongDouble a, LongDouble b) {
  return convert(floatx80_add(convert(a), convert(b)));
}

float128 SoftFloatFast::add128(float128 a, float128 b) {
  return float128_add(a, b);
}
}  // namespace floatprof
