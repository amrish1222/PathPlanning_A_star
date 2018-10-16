/** @file test/main.cpp
 * @brief GoogleTest
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */

#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
