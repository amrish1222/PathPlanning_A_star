/** @file Arena.cpp
 * @brief Arena  source file
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */
#include<iostream>

#include "../include/Arena.h"

/**
 * @brief Constructor for Arena Class
 * @param none
 * @return none.
 */
Arena::Arena() {
  gridArena[4][4] = {};
  startPtX = 0;
  startPtY = 0;
  endPtX = 0;
  endPtY = 0;
  maxX = 0;
  maxY = 0;
}

Arena::~Arena() {
}

/**
 * @brief Sets the GridSize of the arena
 * @param x - x - coordinate of point
 * @param y - y - coordinate of point
 * @return none.
 */
void Arena::setArenaSize(int x, int y) {
  Arena::maxX = x;
  Arena::maxY = y;
}

/**
 * @brief Sets the start point of the robot
 * @param x - x - coordinate of point
 * @param y - y - coordinate of point
 * @return none.
 */
void Arena::setStartPt(int x, int y) {
  Arena::startPtX = x;
  Arena::startPtY = y;
}

/**
 * @brief Sets the end point of the robot
 * @param x - x - coordinate of point
 * @param y - y - coordinate of point
 * @return none.
 */
void Arena::setEndPt(int x, int y) {
  Arena::endPtX = x;
  Arena::endPtY = y;
}

/**
 * @brief gets the workspace from the user as input
 * @param sin references for input stream
 * @param sout reference for output stream
 * @return none.
 */
void Arena::getWorkspace(std::istream &sin, std::ostream &sout) {
  // getting the arena size
  getArenaSize(sin, sout);
  sout << "Enter the number of obstacles in the grid:";
// Getting input of number of obstacles in grid
  int noOfObstacles = 0;
// Position of obstacle
  int xPos;
  int yPos;
  sin >> noOfObstacles;
  for (int i = 0; i < noOfObstacles; i++) {
    sout << "X" << i + 1 << ":";
    sin >> xPos;
    sout << "Y" << i + 1 << ":";
    sin >> yPos;
    Arena::gridArena[xPos][yPos] = 1;
  }
  getStartPt(sin, sout);
  getEndPt(sin, sout);
  displayWorkspace();
}

/**
 * @brief Gets the  arena size from the user
 * @param sin references for input stream
 * @param sout reference for output stream
 * @return none.
 */
void Arena::getArenaSize(std::istream &in, std::ostream &out) {
  int x;
  int y;
  // Getting the Arena size in X and Y from the user by prompting
  out << "Enter Arena dimensions" << std::endl;
  out << "X:";
  in >> x;
  out << "Y:";
  in >> y;
  // Setting the Variables related to the size of the Arena
  Arena::setArenaSize(x, y);
}

/**
 * @brief retrieves the Start point from the user
 * @param sin references for input stream
 * @param sout reference for output stream
 * @return none.
 */
void Arena::getStartPt(std::istream &in, std::ostream &out) {
  int x;
  int y;
  // Getting the Start point in X and Y from the user by prompting
  out << "Enter Start Point" << std::endl;
  out << "X:";
  in >> x;
  out << "Y:";
  in >> y;
  // Setting the Variables related to the Start point
  Arena::setStartPt(x, y);
}

/**
 * @brief retrieves the End point from the user
 * @param sin references for input stream
 * @param sout reference for output stream
 * @return none.
 */
void Arena::getEndPt(std::istream &in, std::ostream &out) {
  int x;
  int y;
  // Getting the End point in X and Y from the user by prompting
  out << "Enter End Point" << std::endl;
  out << "X:";
  in >> x;
  out << "Y:";
  in >> y;
  // Setting the Variables related to the Start point
  Arena::setEndPt(x, y);
}

/**
 * @brief Displays the arena in the terminal
 * @param none
 * @return none.
 */
void Arena::displayWorkspace() {
  for (int j = 0; j <= Arena::maxY; j++) {
    for (int i = 0; i <= Arena::maxX; i++) {
      //std::cout << "," << i << "," << j;
      std::cout << Arena::gridArena[i][j];
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

