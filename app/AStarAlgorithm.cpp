/** @file Arena.cpp
 * @brief Arena  source file
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */

#include <AStarAlgorithm.h>

AStarAlgorithm::AStarAlgorithm() {
  // TODO Auto-generated constructor stub
  storeG_Cost = 0;
  CurrentPtX = 0;
  CurrentPTY = 0;
  TargetPtX = 0;
  TargetPtY = 0;
  SampledPts[100][100]= {};
  Outputpath[100][100]= {};

}

AStarAlgorithm::~AStarAlgorithm() {
  // TODO Auto-generated destructor stub
}

/**
 * @brief gives the cost of moving from (x1,y1) to (x2,y2)
 * @param  x1
 * @param  y1
 * @param  x2
 * @param  y2
 * @return int
 */
int AStarAlgorithm::getCost(int x1, int y1, int x2, int y2) {
  return 0;
}

/**
 * @brief checks whether the point is inside an obstacle
 * @param x
 * @param y
 * @param _arena
 * @return bool
 * @return none.
 */
bool AStarAlgorithm::isPtInObstacle(int x, int y, Arena _arena) {
  return false;
}

/**
 * @brief checks whether the point has already been sampled
 * @param x
 * @param y
 * @return bool
 */
bool AStarAlgorithm::isPtSampled(int x, int y) {
  return false;
}
