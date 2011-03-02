// Copyright 2011, Emir Habul <emiraga@gmail.com>

namespace softfloat {

extern "C" {
#include "softfloat/softfloat/bits64/386-Win32-GCC/softfloat.h"
}
#define SOFTFLOAT_BITS64_SOFTFLOAT_H
}  // namespace softfloat

#include "softfloat/softfloatfast.h"

namespace floatprof {

SoftFloatFast::SoftFloatFast() {
}

SoftFloatFast::~SoftFloatFast() {
}

Float SoftFloatFast::add32(Float a, Float b) {
  return ::softfloat::float32_add(a.softfloat, b.softfloat);
}

Double SoftFloatFast::add64(Double a, Double b) {
  return ::softfloat::float64_add(a.softfloat, b.softfloat);
}

LongDouble SoftFloatFast::addx80(LongDouble a, LongDouble b) {
  return ::softfloat::floatx80_add(a.softfloat, b.softfloat);
}

}  // namespace floatprof
