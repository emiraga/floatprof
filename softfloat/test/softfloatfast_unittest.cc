// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "gtest/gtest.h"
#include "softfloat/softfloatfast.h"

namespace floatprof {

#define RUN_ADDSIMPLE_TEST(NATIVETYPE, METHOD) \
  for (int i = 0; i < 1000; i++) { \
    num1.native = (NATIVETYPE)rand_r(&seed) / RAND_MAX; \
    num2.native = (NATIVETYPE)rand_r(&seed) / RAND_MAX; \
    num3 = op.METHOD(num1, num2); \
    ASSERT_EQ(num3.native, num1.native + num2.native); \
    \
    num1.native *= rand_r(&seed); \
    num2.native *= rand_r(&seed); \
    num3 = op.METHOD(num1, num2); \
    ASSERT_EQ(num3.native, num1.native + num2.native); \
    \
    num1.native -= rand_r(&seed); \
    num2.native -= rand_r(&seed); \
    num3 = op.METHOD(num1, num2); \
    ASSERT_EQ(num3.native, num1.native + num2.native); \
  }

TEST(SoftFloatFast, AdditionSimple32) {
  SoftFloatFast op;
  Float num1, num2, num3;
  unsigned int seed = 1;

  RUN_ADDSIMPLE_TEST(float, add32);  // NOLINT(readability/function)
}

TEST(SoftFloatFast, AdditionSimple64) {
  SoftFloatFast op;
  Double num1, num2, num3;
  unsigned int seed = 1;

  RUN_ADDSIMPLE_TEST(double, add64);  // NOLINT(readability/function)
}

TEST(SoftFloatFast, AdditionSimpleX80) {
  SoftFloatFast op;
  LongDouble num1, num2, num3;
  unsigned int seed = 1;

  RUN_ADDSIMPLE_TEST(long double, addx80);
}
#undef RUN_ADDSIMPLE_TEST

}  // namespace floatprof
