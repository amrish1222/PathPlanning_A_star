/** @file AStarAlgorithm.cpp
 * @brief AStarAlgorithm  source file
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */
#include <math.h>
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
  // Return the euclidean distance between the points (x1,y1) and (x2,y2)
  double sqSum = pow((x1 - x2), 2) + pow((y1 - y2), 2);
  return sqrt(sqSum);
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
  int val = _arena.gridArena[x][y];
  // check if the value is 1 inside the 2D which stores the workspace
  if (val == 1) {
    return true;
  } else {
    return false;
  }
}

/**
 * @brief checks whether the point has already been sampled
 * @param x
 * @param y
 * @return boolean whether point is sampled or not
 */
bool AStarAlgorithm::isPtSampled(int x, int y) {
  int val = AStarAlgorithm::sampledPts[x][y];
  // check if the value is 1 inside the 2D which stores the workspace
  if (val == 1) {
    return true;
  } else {
    return false;
  }
}

/**
 * @brief executes the algorithm to generate the required path
 * and saves it into the OutputPath
 * @param x
 * @param y
 * @return none
 */
void AStarAlgorithm::compute() {
  // Variable to check if goal/ end point is reached
  bool goalReached = false;
  // variables to store End point
  int startPtX = AStarAlgorithm::_arena.startPtX;
  int startPtY = AStarAlgorithm::_arena.startPtY;
  // Setting current point to start point
  currentPtX = _arena.startPtX;
  currentPtY = _arena.startPtY;
  setPtAsSampled(currentPtX, currentPtY);
  // variables to store End point
  int endPtX = AStarAlgorithm::_arena.endPtX;
  int endPtY = AStarAlgorithm::_arena.endPtY;
  // variables to store Max point
  int maxX = AStarAlgorithm::_arena.maxX;
  int maxY = AStarAlgorithm::_arena.maxY;
  // set start= 2 and end= 3 position in output path
  outputpath[startPtX][startPtY] = 2;
  outputpath[endPtX][endPtY] = 3;
  // Variables for storing temp cost and location
  double tempCost = 999999;
  double tempGCost = 0;
  int tempX = currentPtX;
  int tempY = currentPtY;
  // Run until goal is reached
  while (!goalReached) {
    // setting high comparison cost to get minimum cost value
    tempCost = 999999;
  // iterating over the 8 points around the current selected point
  for (int x = currentPtX - 1; x <= currentPtX + 1; x++) {
    for (int y = currentPtY - 1; y <= currentPtY + 1; y++) {
      // Check for input inside arena
        if (x >= 0 && x <= maxX && y >= 0 && y <= maxY) {
          // check if point is sampled
          if (!isPtSampled(x, y)) {
            // check if point is inside obstacle
            if (!isPtInObstacle(x, y, AStarAlgorithm::_arena)) {
          // get Cost of moving to target point g(n)
              double costXY = getCost(currentPtX, currentPtY, x, y);
          // store the G function cost
          tempGCost = costXY;
          // Add previous cost to move to current Point
          costXY += storeG_Cost;
          // Add heuristic cost of the target point to end point
          costXY += getCost(x, y, endPtX, endPtY);
          if (costXY < tempCost) {
            tempX = x;
            tempY = y;
            tempCost = costXY;
          }
            }
          }
        }
  }
}
  // store the G cost to get to the new current point
  AStarAlgorithm::storeG_Cost += tempGCost;
  // Replace the current point variables
  AStarAlgorithm::currentPtX = tempX;
  AStarAlgorithm::currentPtY = tempY;
    if (currentPtX == endPtX && currentPtY == endPtY) {
      goalReached = true;
    } else {  // to avoid writing into end point
    // set the path in the output path as 4
      outputpath[tempX][tempY] = 4;
    }
    // set this point is sampled
    setPtAsSampled(tempX, tempY);
  // Check if end point is reached
  }
}

/**
 * @brief updates the sampledPts 2D array variable
 * that stores whether the point is sampled or not
 * @param x
 * @param y
 * @return none
 */
void AStarAlgorithm::setPtAsSampled(int x, int y) {
  // Update the value in the 2D array storing the sampled points
  AStarAlgorithm::sampledPts[x][y] = 1;
}

/**
 * @brief sets the _arena variable from a source
 * @param Arena
 * @return none
 */
void AStarAlgorithm::setArena(Arena arena1) {
  AStarAlgorithm::_arena = arena1;
  for (int i = 0; i <= arena1.maxX; i++) {
    for (int j = 0; j <= arena1.maxY; j++) {
      outputpath[i][j] = arena1.gridArena[i][j];
    }
  }
}
