/** @file Arena.h
 * @brief Arena header file.
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */

#ifndef INCLUDE_ARENA_H_
#define INCLUDE_ARENA_H_

#include<iostream>

class Arena {
 private:

  /**
   * @brief sets the variables related to arena Size
   * with user input
   * @param x
   * @param y
   * @return none.
   */
  void setArenaSize(int x, int y);

  /**
   * @brief sets the variables related to start point
   * with user input
   * @param x
   * @param y
   * @return none.
   */
  void setStartPt(int x, int y);

  /**
   * @brief sets the variables related to end point
   * with user input
   * @param x
   * @param y
   * @return none.
   */
  void setEndPt(int x, int y);

  /**
   * @brief retrieves the Grid size from the user
   * @param none
   * @return none.
   */
  void getArenaSize(std::istream &in, std::ostream &out);

  /**
   * @brief retrieves the Start point from the user
   * @param none
   * @return none.
   */
  void getStartPt(std::istream &in, std::ostream &out);

  /**
   * @brief retrieves the End point from the user
   * @param none
   * @return none.
   */
  void getEndPt(std::istream &in, std::ostream &out);

  /**
   * @brief Displays the arena in the terminal
   * @param none
   * @return none.
   */
  void displayWorkspace();

 public:
  Arena();
  virtual ~Arena();

  // Declaration of class members
  /**
   * @brief 2D array that stores the map
   */
  int gridArena[100][100];

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
   * 0- free space and 1- obstacle
   * @param sin references for input stream
   * @param sout reference for output stream
   * @return none.
   */
  //Array2D getWorkspace():
  void getWorkspace(std::istream &in, std::ostream &out);
};

#endif /* INCLUDE_ARENA_H_ */
