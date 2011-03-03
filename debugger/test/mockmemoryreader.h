// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef DEBUGGER_TEST_MOCKMEMORYREADER_H_
#define DEBUGGER_TEST_MOCKMEMORYREADER_H_

#include "debugger/memoryreader.h"
#include "gmock/gmock.h"

namespace floatprof {

class MockMemoryReader : public MemoryReader {
 public:
  MOCK_METHOD1(get_fx80_from_st, LongDouble(int st));
  MOCK_METHOD1(get_fx80, LongDouble(void *addr));
  MOCK_METHOD1(get_f64, Double(void *addr));
  MOCK_METHOD1(get_f32, Float(void *addr));
  MOCK_METHOD1(get_uint32, uint32_t(void *addr));
  MOCK_METHOD1(get_uint16, uint16_t(void *addr));
  MOCK_METHOD0(current_instruction, Instruction());
};

}  // namespace floatprof

#endif  // DEBUGGER_TEST_MOCKMEMORYREADER_H_
