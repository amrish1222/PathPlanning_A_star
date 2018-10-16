/** @file Arena.cpp
 * @brief Arena  source file
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */
#include<math.h>
#include <algorithm>
#include <iterator>

#include "../include/AStarAlgorithm.h"
#include "../include/Arena.h"

/**
 * @brief constructor for AStarAlgorithm class
 * @param  none
 * @return none
 */
AStarAlgorithm::AStarAlgorithm() {
  storeG_Cost = 0;
  currentPtX = 0;
  currentPtY = 0;
  targetPtX = 0;
  targetPtY = 0;
  sampledPts[100][100]= {};
  outputpath[100][100]= {};
}

/**
 * @brief distructor for AStarAlgorithm class
 * @param  none
 * @return none
 */
AStarAlgorithm::~AStarAlgorithm() {
}

/**
 * @brief calculates the cost of moving from (x1,y1) to (x2,y2)
 * @param  x1
 * @param  y1
 * @param  x2
 * @param  y2
 * @return the cost of moving from (x1,y1) to (x2,y2)
 */
double AStarAlgorithm::getCost(int x1, int y1, int x2, int y2) {
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
 * @return boolean whether point is sampled or not
 */
bool AStarAlgorithm::isPtSampled(int x, int y) {
  return false;
}

/**
 * @brief executes the algorithm to generate the required path
 * and saves it into the OutputPath
 * @param x
 * @param y
 * @return none
 */
void AStarAlgorithm::compute() {
}

/**
 * @brief updates the sampledPts 2D array variable
 * that stores whether the point is sampled or not
 * @param x
 * @param y
 * @return none
 */
void AStarAlgorithm::setPtAsSampled(int x, int y) {
}

/**
 * @brief sets the _arena variable from a source
 * @param Arena
 * @return none
 */
void AStarAlgorithm::setArena(Arena arena1) {
  }
