// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "debugger/instructionprint.h"
#include "debugger/test/mockmemoryreader.h"

#include "gtest/gtest.h"

using testing::Return;

namespace floatprof {

TEST(PrintInstructions, InstructionConversion) {
  char output[256];
  PrintInstructions print;

#define TEST_INSTR_PRINT(data, expect) \
  print.printToString(reinterpret_cast<const uint8_t*>(data), output, 256); \
  ASSERT_STREQ(output, expect);

  TEST_INSTR_PRINT("\xcd\x80\xbb\x00\x00\x00", "int 0x80");
  TEST_INSTR_PRINT("\xd8\xc1\xdc\xc1\xd9\xee", "fadd st1");
  TEST_INSTR_PRINT("\xDC\x25\x00\x00\x00\x00", "fsub qword [dword 0x0]");
  TEST_INSTR_PRINT("\xDC\x2D\x00\x00\x00\x00", "fsubr qword [dword 0x0]");

#undef TEST_INSTR_PRINT
}

TEST(PrintInstructions, printing) {
  MockMemoryReader memory;
  Instruction instr = {};
  instr.opcode8[0] = 0xcd;
  instr.opcode8[1] = 0x80;

  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));

  PrintInstructions print;
  print.notifyInstruction(&memory);
}

}  // namespace floatprof
