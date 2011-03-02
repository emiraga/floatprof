// Copyright 2011, Emir Habul <emiraga@gmail.com>


#include "gtest/gtest.h"
#include "debugger/instructionprint.h"

namespace floatprof {
TEST(InstructionPrint, InstructionConversion) {
  char output[256];
  InstructionPrint print;

#define TEST_INSTR_PRINT(data, expect) \
  print.printToString(reinterpret_cast<const uint8_t*>(data), output, 256); \
  ASSERT_STREQ(output, expect);

  TEST_INSTR_PRINT("\xcd\x80\xbb\x00\x00\x00", "int 0x80");
  TEST_INSTR_PRINT("\xd8\xc1\xdc\xc1\xd9\xee", "fadd st1");
#undef TEST_INSTR_PRINT
}
}  // namespace floatprof
