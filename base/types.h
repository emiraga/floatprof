// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef BASE_TYPES_H_
#define BASE_TYPES_H_

#include <inttypes.h>

namespace softfloat {

#ifndef SOFTFLOAT_BITS64_SOFTFLOAT_H
//
// Simplified version of
// #include "softfloat/softfloat/bits64/386-Win32-GCC/softfloat.h"
//
// This part of code is copied from another project (softfloat),
// for compatibility it should not be modified just to pass LINT.
//
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

}  // namespace softfloat

namespace floatprof {

union Float {
  enum {
    SIZE32 = 1
  };
  float native;
  uint32_t integers[SIZE32];
  ::softfloat::float32 softfloat;

  Float() {}
  Float(::softfloat::float32 sf) : softfloat(sf) {}
};

union Double {
  enum {
    SIZE32 = 2
  };
  double native;
  uint32_t integers[SIZE32];
  ::softfloat::float64 softfloat;

  Double() {}
  Double(::softfloat::float64 sf) : softfloat(sf) {}
};

union LongDouble {
  enum {
    SIZE32 = 3
  };
  long double native;
  uint32_t integers[SIZE32];
  ::softfloat::floatx80 softfloat;

  LongDouble() {}
  LongDouble(::softfloat::floatx80 sf) : softfloat(sf) {}
};

// CPU Instruction storage
#pragma pack(push) /* save current alignment */
#pragma pack(1) /* remove alignment */
union Instruction {
  enum {
    SIZE32 = 8  // This value is from NDISASM, seems pretty large to me.
  };
  uint32_t opcode32[SIZE32];
  uint8_t opcode8[SIZE32*4];
  struct {
    uint8_t opc;
    uint8_t regm:3;
    uint8_t eopc:3;
    uint8_t mod:2;
    void *pointer;
  } ccp;
};
#pragma pack(pop) /* restore previous alignment */

}  // namespace floatprof

#endif  // BASE_TYPES_H_
