/** @file Arena.h
 * @brief Arena header file.
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */

#ifndef INCLUDE_ASTARALGORITHM_H_
#define INCLUDE_ASTARALGORITHM_H_

#include "../include/Arena.h"

class AStarAlgorithm {
 private:
  // Declaration of class members

  /**
   * @brief Stores the cost function f
   */
  int storeG_Cost;

  /**
   * @brief X coordinate of Current position of iteration
   */
  int CurrentPtX;

  /**
   * @brief Y coordinate of Current position of iteration
   */
  int CurrentPTY;

  /**
   * @brief X coordinate of Target position of iteration
   */
  int TargetPtX;

  /**
   * @brief Y coordinate of Target position of iteration
   */
  int TargetPtY;

  /**
   * @brief Stores the positions that were iterated through
   */
  int SampledPts[][];

  /**
   * @brief gets the cost between the two points (x1,y1)
   * and (x2,y2)
   * @param  x1
   * @param  y1
   * @param  x2
   * @param  y2
   * @return int
   * @return none.
   */
  int getCost(int x1, int y1, int x2, int y2);

  /**
   * @brief checks whether the point is inside an obstacle
   * @param x
   * @param y
   * @param _arena
   * @return bool
   * @return none.
   */
  bool isPtInObstacle(int x, int y, Arena _arena);

  /**
   * @brief checks whether the point has already been sampled
   * @param x
   * @param y
   * @return bool
   */
  bool isPtSampled(int x, int y);

 public:
  AStarAlgorithm();
  virtual ~AStarAlgorithm();

  /**
   * @brief Holds the all the information about the path
   * 0- free space, 1- obstacle, 2- start point
   * 3- end point, 4- path.
   * including free space, obstacles and generated path.
   */
  int Outputpath[][];

  /**
   * @brief instance of class Arena
   */
  Arena _arena;

  /**
   * @brief Holds the all the information about the path
   * 0- free space, 1- obstacle, 2- start point
   * 3- end point, 4- path.
   * including free space, obstacles and generated path.
   */
  void compute();
};

#endif /* INCLUDE_ASTARALGORITHM_H_ */
