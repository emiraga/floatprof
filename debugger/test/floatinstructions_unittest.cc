// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include <boost/smart_ptr.hpp>

#include "profiler/test/mockfloatingobserver.h"
#include "debugger/test/mockmemoryreader.h"
#include "debugger/floatinstructions.h"
#include "gtest/gtest.h"

using boost::shared_ptr;
using ::testing::Return;

namespace floatprof {

TEST(FloatInstructions, fadd_dword) {
  FloatInstructions parser;

  shared_ptr<MockFloatingObserver> fl_observe(new MockFloatingObserver());
  EXPECT_CALL(*fl_observe, addx80(LongDouble(1.0L), LongDouble(2.0L))).Times(1);
  parser.addObserver(fl_observe);

  MockMemoryReader memory;

  Instruction instr;
  instr.ccp.opc = 0xD8;  // fadd dword [0x80000]
  instr.ccp.eopc = 0;
  instr.ccp.mod = 0;
  instr.ccp.pointer = reinterpret_cast<void*>(0x80000);

  EXPECT_CALL(memory, current_instruction()).Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(0)).Times(1)
      .WillOnce(Return(LongDouble(1.0L)));
  EXPECT_CALL(memory, get_f32(instr.ccp.pointer)).Times(1)
      .WillOnce(Return(Float(2.0f)));

  parser.notifyInstruction(&memory);

  instr.ccp.opc = 0xDC;  // fadd qword [0x80000]
  EXPECT_CALL(*fl_observe, addx80(LongDouble(3.0L), LongDouble(4.0L))).Times(1);

  EXPECT_CALL(memory, current_instruction()).Times(1)
      .WillOnce(Return(instr));
  EXPECT_CALL(memory, get_fx80_from_st(0)).Times(1)
      .WillOnce(Return(LongDouble(3.0L)));
  EXPECT_CALL(memory, get_f64(instr.ccp.pointer)).Times(1)
      .WillOnce(Return(Double(4.0)));

  parser.notifyInstruction(&memory);
}

}  // namespace floatprof
