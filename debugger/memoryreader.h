// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef DEBUGGER_MEMORYREADER_H_
#define DEBUGGER_MEMORYREADER_H_

#include "base/types.h"

namespace floatprof {
class MemoryReader {
 public:
  virtual ~MemoryReader() {}
  virtual LongDouble get_fx80_from_st(int st) = 0;
  virtual LongDouble get_fx80(void *addr) = 0;
  virtual Double get_f64(void *addr) = 0;
  virtual Float get_f32(void *addr) = 0;
  virtual uint32_t get_uint32(void *addr) = 0;
  virtual uint16_t get_uint16(void *addr) = 0;
  virtual Instruction current_instruction() = 0;
};
}  // namespace floatprof

#endif  // DEBUGGER_MEMORYREADER_H_
