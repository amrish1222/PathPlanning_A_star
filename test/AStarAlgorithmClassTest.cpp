/** @file test/AStarAlgorithmClassTest.cpp
 * @brief GoogleTest- unit tests
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */
#include<iostream>
#include<sstream>

#include<gtest/gtest.h>

#include"../include/Arena.h"
#include"../include/AStarAlgorithm.h"

struct AStarAlgorithmTest : public testing::Test {
  AStarAlgorithm *AStar1;
  void SetUp() {
    AStar1 = new AStarAlgorithm;
    Arena arena1;
    std::stringstream sin;
    std::stringstream sout;
    // input- arena size, number of obstacles, position of obstacles
    // start point and end point
    sin << "2 2 2 0 1 1 0 0 0 2 2";
    arena1.getWorkspace(sin, sout);
    AStar1->setArena(arena1);
  }
  void TearDown() {
    delete AStar1;
  }
};

TEST_F(AStarAlgorithmTest,initValuesTest) {
  EXPECT_EQ(0, AStar1->sampledPts[2][2]);
  EXPECT_EQ(0, AStar1->outputpath[2][2]);
}

TEST_F(AStarAlgorithmTest,getCostTest) {
  EXPECT_NEAR(2.82842, AStar1->getCost(1, 2, 3, 4), 0.001);
}

TEST_F(AStarAlgorithmTest,isPtInObstacleTest) {
  EXPECT_TRUE(!AStar1->isPtInObstacle(1, 1, AStar1->_arena));
}

TEST_F(AStarAlgorithmTest,setPtAsSampledTest) {
  AStar1->setPtAsSampled(2, 3);
  EXPECT_EQ(1, AStar1->sampledPts[2][3]);
}

TEST_F(AStarAlgorithmTest,isPtSampledTest) {
  EXPECT_TRUE(!AStar1->isPtSampled(1, 1));
}

TEST_F(AStarAlgorithmTest, compputeTest) {
  AStar1->compute();
  EXPECT_EQ(4, AStar1->outputpath[1][1]);
  EXPECT_EQ(2, AStar1->outputpath[0][0]);
  EXPECT_EQ(3, AStar1->outputpath[2][2]);

}
