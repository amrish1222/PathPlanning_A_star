/** @file Arena.h
 * @brief Arena header file.
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */

#ifndef INCLUDE_PATHOUTPUT_H_
#define INCLUDE_PATHOUTPUT_H_

class PathOutput {
 public:
  PathOutput();
  virtual ~PathOutput();

  /**
   * @brief X coordinate of start point
   */
  int path[][];

  /**
   * @brief Saves a file to build folder
   * with user input
   * @param none
   * @return none.
   */
  int OutputPath2File();

};

#endif /* INCLUDE_PATHOUTPUT_H_ */
