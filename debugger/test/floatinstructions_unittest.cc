// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include <boost/smart_ptr.hpp>

#include "profiler/test/mockfloatingobserver.h"
#include "debugger/test/mockmemoryreader.h"
#include "debugger/floatinstructions.h"
#include "gtest/gtest.h"

using boost::shared_ptr;
using ::testing::Return;
using ::testing::StrictMock;

namespace floatprof {

// Test fixture for FloatInstruction
class FloatInstructionsTest : public ::testing::Test {
 public:
  FloatInstructionsTest()
    : fl_observe(new StrictMock<MockFloatingObserver>()) { }
 protected:
  void SetUp() {
    parser.addObserver(fl_observe);

    instr.ccp.pointer = reinterpret_cast<void*>(0x80000);
  }
  FloatInstructions parser;
  shared_ptr<StrictMock<MockFloatingObserver> > fl_observe;
  Instruction instr;
  MockMemoryReader memory;
};

TEST_F(FloatInstructionsTest, fadd_dword) {
  instr.ccp.opc = 0xD8;  // fadd dword [0x80000]
  instr.ccp.eopc = 0;
  instr.ccp.mod = 0;
  EXPECT_CALL(*fl_observe, addx80(LongDouble(1.0L), LongDouble(2.0L)))
      .Times(1);
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(0))
      .Times(1)
      .WillOnce(Return(LongDouble(1.0L)));
  EXPECT_CALL(memory, get_f32(instr.ccp.pointer))
      .Times(1)
      .WillOnce(Return(Float(2.0f)));
  parser.notifyInstruction(&memory);
}

TEST_F(FloatInstructionsTest, fadd_qword) {
  instr.ccp.opc = 0xDC;  // fadd qword [0x80000]
  instr.ccp.eopc = 0;
  instr.ccp.mod = 0;
  EXPECT_CALL(*fl_observe, addx80(LongDouble(3.0L), LongDouble(4.0L)))
      .Times(1);
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(0))
      .Times(1)
      .WillOnce(Return(LongDouble(3.0L)));
  EXPECT_CALL(memory, get_f64(instr.ccp.pointer))
      .Times(1)
      .WillOnce(Return(Double(4.0)));

  parser.notifyInstruction(&memory);
}

TEST_F(FloatInstructionsTest, invalid_eopc) {
  instr.ccp.opc = 0xDC;  // f??? qword [0x80000]
  instr.ccp.eopc = 2;
  instr.ccp.mod = 0;
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));

  parser.notifyInstruction(&memory);
}

TEST_F(FloatInstructionsTest, fsub_qword) {
  instr.ccp.opc = 0xDC;  // fsub qword [0x80000]
  instr.ccp.eopc = 4;
  instr.ccp.mod = 0;
  EXPECT_CALL(*fl_observe, addx80(LongDouble(3.0L), LongDouble(-4.0L)))
      .Times(1);
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(0))
      .Times(1)
      .WillOnce(Return(LongDouble(3.0L)));
  EXPECT_CALL(memory, get_f64(instr.ccp.pointer))
      .Times(1)
      .WillOnce(Return(Double(4.0)));

  parser.notifyInstruction(&memory);
}

TEST_F(FloatInstructionsTest, fsubr_qword) {
  instr.ccp.opc = 0xDC;  // fsubr qword [0x80000]
  instr.ccp.eopc = 5;
  instr.ccp.mod = 0;
  EXPECT_CALL(*fl_observe, addx80(LongDouble(4.0L), LongDouble(-3.0L)))
      .Times(1);
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(0))
      .Times(1)
      .WillOnce(Return(LongDouble(3.0L)));
  EXPECT_CALL(memory, get_f64(instr.ccp.pointer))
      .Times(1)
      .WillOnce(Return(Double(4.0)));

  parser.notifyInstruction(&memory);
}

TEST_F(FloatInstructionsTest, fadd_st3) {
  instr.opcode8[0] = 0xD8;
  instr.opcode8[1] = 0xC3;  // fadd st0, st3
  EXPECT_CALL(*fl_observe, addx80(LongDouble(5.0L), LongDouble(6.0L)))
      .Times(1);
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(0))
      .Times(1)
      .WillOnce(Return(LongDouble(5.0L)));
  EXPECT_CALL(memory, get_fx80_from_st(3))
      .Times(1)
      .WillOnce(Return(LongDouble(6.0)));

  parser.notifyInstruction(&memory);
}

TEST_F(FloatInstructionsTest, fadd_to_st3) {
  instr.opcode8[0] = 0xDC;
  instr.opcode8[1] = 0xC3;  // fadd st3, st0
  EXPECT_CALL(*fl_observe, addx80(LongDouble(6.0L), LongDouble(5.0L)))
      .Times(1);
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(0))
      .Times(1)
      .WillOnce(Return(LongDouble(5.0L)));
  EXPECT_CALL(memory, get_fx80_from_st(3))
      .Times(1)
      .WillOnce(Return(LongDouble(6.0)));

  parser.notifyInstruction(&memory);
}

TEST_F(FloatInstructionsTest, faddp_st3) {
  instr.opcode8[0] = 0xDE;
  instr.opcode8[1] = 0xC3;  // faddp st3, st0
  EXPECT_CALL(*fl_observe, addx80(LongDouble(6.0L), LongDouble(5.0L)))
      .Times(1);
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(0))
      .Times(1)
      .WillOnce(Return(LongDouble(5.0L)));
  EXPECT_CALL(memory, get_fx80_from_st(3))
      .Times(1)
      .WillOnce(Return(LongDouble(6.0)));

  parser.notifyInstruction(&memory);
}

/*f*/
TEST_F(FloatInstructionsTest, fsubp) {
  instr.opcode8[0] = 0xDE;
  instr.opcode8[1] = 0xE9;  // fsubp
  EXPECT_CALL(*fl_observe, addx80(LongDouble(1.0L), LongDouble(-0.5L)))
      .Times(1);
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(1))
      .Times(1)
      .WillOnce(Return(LongDouble(1.0)));
  EXPECT_CALL(memory, get_fx80_from_st(0))
      .Times(1)
      .WillOnce(Return(LongDouble(0.5L)));

  parser.notifyInstruction(&memory);
}

/*f*/
TEST_F(FloatInstructionsTest, fsubrp_st3) {
  instr.opcode8[0] = 0xDE;
  instr.opcode8[1] = 0xE2;  // fsubrp st2, st0
  EXPECT_CALL(*fl_observe, addx80(LongDouble(5.0L), LongDouble(-6.0L)))
      .Times(1);
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(2))
      .Times(1)
      .WillOnce(Return(LongDouble(6.0)));
  EXPECT_CALL(memory, get_fx80_from_st(0))
      .Times(1)
      .WillOnce(Return(LongDouble(5.0L)));

  parser.notifyInstruction(&memory);
}

TEST_F(FloatInstructionsTest, fiadd_dword) {
  instr.opcode8[0] = 0xDA;
  instr.opcode8[1] = 0x05;
  instr.opcode8[2] = 0x00;  // fiadd dword [dword 0x80000]
  instr.opcode8[3] = 0x00;
  instr.opcode8[4] = 0x08;
  instr.opcode8[5] = 0x00;
  EXPECT_CALL(*fl_observe, addx80(LongDouble(5.0L), LongDouble(6.0L)))
      .Times(1);
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(0))
      .Times(1)
      .WillOnce(Return(LongDouble(5.0L)));
  EXPECT_CALL(memory, get_uint32(instr.ccp.pointer))
      .Times(1)
      .WillOnce(Return(uint32_t(6)));

  parser.notifyInstruction(&memory);
}

TEST_F(FloatInstructionsTest, fiadd_word) {
  instr.opcode8[0] = 0xDE;
  instr.opcode8[1] = 0x05;
  instr.opcode8[2] = 0x00;  // fiadd word [word 0x80000]
  instr.opcode8[3] = 0x00;
  instr.opcode8[4] = 0x08;
  instr.opcode8[5] = 0x00;
  EXPECT_CALL(*fl_observe, addx80(LongDouble(5.0L), LongDouble(6.0L)))
      .Times(1);
  EXPECT_CALL(memory, current_instruction())
      .Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(0))
      .Times(1)
      .WillOnce(Return(LongDouble(5.0L)));
  EXPECT_CALL(memory, get_uint16(instr.ccp.pointer))
      .Times(1)
      .WillOnce(Return(uint16_t(6)));

  parser.notifyInstruction(&memory);
}

}  // namespace floatprof
