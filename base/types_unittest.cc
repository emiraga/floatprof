// Copyright 2011, Emir Habul <emiraga@gmail.com>
#include "gtest/gtest.h"
#include "base/types.h"
namespace floatprof {

TEST(TypesTest, TestValidSizes) {
  Instruction instr;

  ASSERT_EQ(16u, sizeof(instr) );
  ASSERT_EQ(16u, sizeof(instr.opcode) );
  ASSERT_EQ(16u, sizeof(instr.iopcode) );

  ASSERT_EQ(sizeof(float), sizeof(Float));  // NOLINT(runtime/sizeof)
  ASSERT_EQ(sizeof(double), sizeof(Double));  // NOLINT(runtime/sizeof)
  ASSERT_EQ(sizeof(long double), sizeof(LongDouble));  // NOLINT(runtime/sizeof)
}
}  // namespace floatprof
