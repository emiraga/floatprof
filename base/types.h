// Copyright 2011, Emir Habul <emiraga@gmail.com>
#ifndef BASE_TYPES_H_
#define BASE_TYPES_H_

#include <inttypes.h>

namespace floatprof {
#pragma pack(push) /* save current alignment */
#pragma pack(1) /* remove alignment */
union Instruction {
  enum {
    SIZE32 = 8  // This value is from NDISASM, seems too large to me.
  };
  uint32_t iopcode[SIZE32];
  uint8_t opcode[SIZE32*4];
  struct {
    uint8_t opc;
    uint8_t opc2;
    void *pointer;
  } c_c_pointer;
};
#pragma pack(pop) /* restore previous alignment */

union Float {
  enum {
    SIZE32 = 1
  };
  float d;
  uint32_t i[SIZE32];
};

union Double {
  enum {
    SIZE32 = 2
  };
  double d;
  uint32_t i[SIZE32];
};

union LongDouble {
  enum {
    SIZE32 = 3
  };
  long double d;
  uint32_t i[SIZE32];
};

}  // namespace floatprof

#endif  // BASE_TYPES_H_
