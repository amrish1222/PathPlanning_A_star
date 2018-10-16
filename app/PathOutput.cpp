/** @file PathOutput.cpp
 * @brief PathOutput source file
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include <string.h>

#include <../include/AStarAlgorithm.h>
#include "../include/Arena.h"
#include "../include/PathOutput.h"

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
}

/**
 * @brief Outputs the required character for the
 * identifier
 * @param integer
 * @return char
 */
char PathOutput::getCharForPt(int identifier) {
   return '0';
}

/**
 * @brief Displays the path on the terminal
 * @param std::ostream
 * @return none.
 */
void PathOutput::DisplayPath(std::ostream &sout) {
}
