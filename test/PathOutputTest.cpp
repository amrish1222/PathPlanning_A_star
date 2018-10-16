/** @file test/PathOutputTest.cpp
 * @brief GoogleTest- unit tests
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */

#include<iostream>
#include<string>
#include<sstream>
#include<fstream>

#include<gtest/gtest.h>
#include<gmock/gmock.h>

#include"../include/Arena.h"
#include"../include/AStarAlgorithm.h"
#include"../include/PathOutput.h"

struct PathOutputTest : public testing::Test {
  PathOutput *PO1;
  void SetUp() {
    PO1 = new PathOutput;
    Arena arena1;
    std::stringstream sin;
    std::stringstream sout;
    // input- arena size, number of obstacles, position of obstacles
    // start point and end point
    sin << "2 2 2 0 1 1 0 0 0 2 2";
    arena1.getWorkspace(sin, sout);
    AStarAlgorithm AStar1;
    AStar1.setArena(arena1);
    AStar1.compute();
    PO1->setAStar(AStar1);
  }
  void TearDown() {
    delete PO1;
  }
};

TEST_F(PathOutputTest,displayPathTest) {
  std::stringstream sout1;
  PO1->DisplayPath(sout1);
  EXPECT_STREQ("S10\n1*0\n00E\n", sout1.str().c_str());
}




