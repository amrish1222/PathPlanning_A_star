/** @file Arena.h
 * @brief Arena header file.
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */

#ifndef INCLUDE_ARENA_H_
#define INCLUDE_ARENA_H_

class Arena {
 private:

  /**
   * @brief retrieves the Grid size from the user
   * @param none
   * @return none.
   */
  void getArenaSize();

  /**
   * @brief retrieves the Start point from the user
   * @param none
   * @return none.
   */
  void getStartPt();

  /**
   * @brief retrieves the End point from the user
   * @param none
   * @return none.
   */
  void getEndPt();

  /**
   * @brief sets the variables related to arena Size
   * with user input
   * @param none
   * @return none.
   */
  void setArenaSize();

  /**
   * @brief sets the variables related to start point
   * with user input
   * @param none
   * @return none.
   */
  void setStartPt();

  /**
   * @brief sets the variables related to end point
   * with user input
   * @param none
   * @return none.
   */
  void setEndPt();


 public:
  Arena();
  virtual ~Arena();

  // Declaration of class members
  /**
   * @brief 2D array that stores the map
   */
  int gridArena[][];

  /**
   * @brief X coordinate of start point
   */
  int startPtX;

  /**
   * @brief Y coordinate of start point
   */
  int startPtY;

  /**
   * @brief X coordinate of end point
   */
  int endPtX;

  /**
   * @brief Y coordinate of end point
   */
  int endPtY;

  /**
   * @brief size of arena in X.
   */
  int maxX;

  /**
   * @brief size of arena in Y.
   */
  int maxY;

  /**
   * @brief retrieves the workspace from the user
   * @param gridArena
   * @return none.
   */
  //Array2D getWorkspace():
  void getWorkspace();



};

#endif /* INCLUDE_ARENA_H_ */
