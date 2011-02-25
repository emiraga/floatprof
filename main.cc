// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include <cstdio>
#include "base/types.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "softfloat/softfloatfast.h"

namespace floatprof {
void test_main() {
  Float a = { 3.4 };
  Float b = { 0.6 };

  SoftFloatFast op;
  Float c = op.add32(a, b);

  printf("Hello %f\n", c.d);
}
}  // namespace floatprof

int main(int argc, char *argv[]) {
  testing::InitGoogleMock(&argc, argv);
  if (RUN_ALL_TESTS())
    return 1;
  floatprof::test_main();
  return 0;
}
