// Copyright 2011, Emir Habul <emiraga@gmail.com>
#include "gtest/gtest.h"
#include "base/types.h"

namespace floatprof {

TEST(TypesTest, TestValidSizes) {
  Instruction instr;
  ASSERT_EQ(32u, sizeof(instr) );
  ASSERT_EQ(32u, sizeof(instr.opcode8) );
  ASSERT_EQ(32u, sizeof(instr.opcode32) );
  ASSERT_EQ(6u, sizeof(instr.ccp));

  Float float1;
  ASSERT_EQ(sizeof(float1.native), sizeof(float1));
  ASSERT_EQ(sizeof(float1.native), sizeof(float1.integers));
  ASSERT_EQ(sizeof(float1.native), sizeof(float1.softfloat));

  Double float2;
  ASSERT_EQ(sizeof(float2.native), sizeof(float2));
  ASSERT_EQ(sizeof(float2.native), sizeof(float2.integers));
  ASSERT_EQ(sizeof(float2.native), sizeof(float2.softfloat));

  LongDouble float3;
  ASSERT_EQ(sizeof(float3.native), sizeof(float3));
  ASSERT_EQ(sizeof(float3.native), sizeof(float3.integers));
  ASSERT_EQ(sizeof(float3.native), sizeof(float3.softfloat));
}

}  // namespace floatprof
