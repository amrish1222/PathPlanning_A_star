/** @file AStarAlgorithm.h
 * @brief AStarAlgorithm header file.
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
  double storeG_Cost;

  /**
   * @brief X coordinate of Current position of iteration
   */
  int currentPtX;

  /**
   * @brief Y coordinate of Current position of iteration
   */
  int currentPtY;

  /**
   * @brief X coordinate of Target position of iteration
   */
  int targetPtX;

  /**
   * @brief Y coordinate of Target position of iteration
   */
  int targetPtY;

 public:
  AStarAlgorithm();
  virtual ~AStarAlgorithm();

  /**
   * @brief Stores the positions that were iterated through
   */
  int sampledPts[100][100];

  /**
   * @brief Holds the all the information about the path
   * 0- free space, 1- obstacle, 2- start point
   * 3- end point, 4- path.
   * including free space, obstacles and generated path.
   */
  int outputpath[100][100];

  /**
   * @brief instance of class Arena
   */
  Arena _arena;

  /**
   * @brief gets the cost between the two points (x1,y1)
   * and (x2,y2)
   * @param  x1
   * @param  y1
   * @param  x2
   * @param  y2
   * @return int
   * @return the cost between the two points (x1,y1)
   * and (x2,y2).
   */
  double getCost(int x1, int y1, int x2, int y2);

  /**
   * @brief checks whether the point is inside an obstacle
   * @param x
   * @param y
   * @param _arena
   * @return boolean whether point is in obstacle
   */
  bool isPtInObstacle(int x, int y, Arena _arena);

  /**
   * @brief checks whether the point has already been sampled
   * @param x
   * @param y
   * @return boolean whether point is sampled
   */
  bool isPtSampled(int x, int y);

  /**
   * @brief updates the sampledPts
   * @param x
   * @param y
   * @return none
   */
  void setPtAsSampled(int x, int y);

  /**
   * @brief sets the _arena variable from a source
   * @param Arena
   * @return none
   */
  void setArena(Arena arena1);


  /**
   * @brief Holds the all the information about the path
   * 0- free space, 1- obstacle, 2- start point
   * 3- end point, 4- path.
   * including free space, obstacles and generated path.
   */
  void compute();
};

#endif /* INCLUDE_ASTARALGORITHM_H_ */
