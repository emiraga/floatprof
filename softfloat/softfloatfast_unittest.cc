// Copyright 2011, Emir Habul <emiraga@gmail.com>
#include "gtest/gtest.h"
#include "softfloat/softfloatfast.h"

namespace floatprof {
TEST(SoftFloatFast, AdditionSimple) {
  SoftFloatFast op;
  LongDouble num_1, num_2, num_3;
  for (int i = 0;i < 1000;i++) {
    num_1.d = (long double)rand_r() / RAND_MAX;
    num_2.d = (long double)rand_r() / RAND_MAX;
    num_3 = op.addx80(num_1, num_2);
    ASSERT_EQ(num_3.d, num_1.d + num_2.d);

    num_1.d *= rand_r();
    num_2.d *= rand_r();
    num_3 = op.addx80(num_1, num_2);
    ASSERT_EQ(num_3.d, num_1.d + num_2.d);

    num_1.d -= rand_r();
    num_2.d -= rand_r();
    num_3 = op.addx80(num_1, num_2);
    ASSERT_EQ(num_3.d, num_1.d + num_2.d);
  }
}
}  // namespace floatprof
