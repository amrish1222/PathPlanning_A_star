/** @file PathOutput.cpp
 * @brief PathOutput source file
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */
#include "../include/PathOutput.h"
#include <string.h>
#include <iostream>
#include <sstream>
#include <fstream>

#include "../include/AStarAlgorithm.h"
#include "../include/Arena.h"

PathOutput::PathOutput() {
}

PathOutput::~PathOutput() {
}

/**
 * @brief Assigning _AStar Variable
 * with user input
 * @param none
 * @return none.
 */
void PathOutput::setAStar(AStarAlgorithm AStar1) {
  _AStarAlg = AStar1;
}

/**
 * @brief Outputs the required character for the
 * identifier
 * @param integer
 * @return char
 */
char PathOutput::getCharForPt(int identifier) {
  char c;
  switch (identifier) {
    case 0:
      c = '0';
      break;
    case 1:
      c = '1';
      break;
    case 2:
      c = 'S';
      break;
    case 3:
      c = 'E';
      break;
    case 4:
      c = '*';
      break;
  }
  return c;
}

/**
 * @brief Displays the path on the terminal
 * @param std::ostream
 * @return none.
 */
void PathOutput::DisplayPath(std::ostream &sout) {
  int maxX = _AStarAlg._arena.maxX;
  int maxY = _AStarAlg._arena.maxY;
  for (int j = 0; j <= maxY; j++) {
    for (int i = 0; i <= maxX; i++) {
      sout << getCharForPt(_AStarAlg.outputpath[i][j]);
    }
    sout << std::endl;
  }
  // sout << std::endl;
}
