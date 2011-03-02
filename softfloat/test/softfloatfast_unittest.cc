// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "gtest/gtest.h"
#include "softfloat/softfloatfast.h"

namespace floatprof {
TEST(SoftFloatFast, AdditionSimple) {
  SoftFloatFast op;
  LongDouble num1, num2, num3;
  unsigned int seed = 1;

  for (int i = 0; i < 1000; i++) {
    num1.native = (long double)rand_r(&seed) / RAND_MAX;
    num2.native = (long double)rand_r(&seed) / RAND_MAX;
    num3 = op.addx80(num1, num2);
    ASSERT_EQ(num3.native, num1.native + num2.native);

    num1.native *= rand_r(&seed);
    num2.native *= rand_r(&seed);
    num3 = op.addx80(num1, num2);
    ASSERT_EQ(num3.native, num1.native + num2.native);

    num1.native -= rand_r(&seed);
    num2.native -= rand_r(&seed);
    num3 = op.addx80(num1, num2);
    ASSERT_EQ(num3.native, num1.native + num2.native);
  }
}

}  // namespace floatprof
