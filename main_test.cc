// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "gmock/gmock.h"
#include "gtest/gtest.h"

int main(int argc, char *argv[]) {
  testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
