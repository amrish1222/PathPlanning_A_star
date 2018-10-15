/** @file test/main.cpp
 * @brief GoogleTest- unit tests
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */

#include <gtest/gtest.h>

#include"../include/Arena.h"
#include"../include/AStarAlgorithm.h"
#include"../include/PathOutput.h"

/**
 * @brief Fixture of Arena class
 */
struct ArenaTest : public testing::Test {
  Arena *arena1;
  void SetUp() {
    arena1 = new Arena;
  }
  void TearDown() {
    delete arena1;
  }
};

/**
 * @brief Test initialization of private variables
 */
TEST(ArenaClassTest, InitValuesTest) {
  Arena arena2;
  EXPECT_EQ(0, arena2.gridArena[2][2]);
  EXPECT_EQ(0, arena2.startPtX);
  EXPECT_EQ(0, arena2.startPtY);
  EXPECT_EQ(0, arena2.endPtX);
  EXPECT_EQ(0, arena2.endPtY);
  EXPECT_EQ(0, arena2.maxX);
  EXPECT_EQ(0, arena2.maxY);
}

TEST_F(ArenaTest, GetWorkspaceTest) {
  std::stringstream sin;
  std::stringstream sout;
// input- arena size, number of obstacles, position of obstacles
// start point and end point
  sin << "2 2 2 0 1 1 0 0 0 1 1";
  arena1->getWorkspace(sin, sout);
  EXPECT_EQ(2, arena1->maxX);
  EXPECT_EQ(2, arena1->maxY);
  EXPECT_EQ(1, arena1->gridArena[0][1]);
  EXPECT_EQ(0, arena1->startPtX);
  EXPECT_EQ(0, arena1->startPtY);
  EXPECT_EQ(1, arena1->endPtX);
  EXPECT_EQ(1, arena1->endPtY);
  std::cout << sout.str();
}

