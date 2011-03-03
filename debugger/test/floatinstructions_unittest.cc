// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include <boost/smart_ptr.hpp>

#include "profiler/test/mockfloatingobserver.h"
#include "debugger/test/mockmemoryreader.h"
#include "debugger/floatinstructions.h"
#include "gtest/gtest.h"

using boost::shared_ptr;
using ::testing::Return;

namespace floatprof {

// Test fixture for FloatInstruction
class FloatInstructionsTest : public ::testing::Test {
 public:
  FloatInstructionsTest()
    : fl_observe(new MockFloatingObserver()) {
  }
 protected:
  void SetUp() {
    parser.addObserver(fl_observe);

    instr.ccp.pointer = reinterpret_cast<void*>(0x80000);
  }
  FloatInstructions parser;
  shared_ptr<MockFloatingObserver> fl_observe;
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

}  // namespace floatprof
