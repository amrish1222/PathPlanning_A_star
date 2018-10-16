/** @file Arena.h
 * @brief Arena header file.
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */

#ifndef INCLUDE_PATHOUTPUT_H_
#define INCLUDE_PATHOUTPUT_H_

#include <iostream>
#include <sstream>

#include "../include/AStarAlgorithm.h"
#include "../include/Arena.h"

class PathOutput {
 private:
  /**
   * @brief object for AStarAlgorithm class
   */
  AStarAlgorithm _AStarAlg;

  /**
   * @brief Outputs the required character for the
   * identifier
   * @param integer
   * @return char
   */
  char getCharForPt(int identifier);

 public:
  PathOutput();
  virtual ~PathOutput();

  /**
   * @brief Displays the path on the terminal
   * 0- free space and 1- obstacle
   * S- start point, E- end point
   * *- path
   * @param std::ostream
   * @return none.
   */
  void DisplayPath(std::ostream &sout);

  /**
   * @brief Assigning _AStar Variable
   * @param none
   * @return none.
   */
  void setAStar(AStarAlgorithm AStar1);
};

#endif /* INCLUDE_PATHOUTPUT_H_ */
