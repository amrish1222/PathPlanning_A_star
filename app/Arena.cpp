/** @file Arena.cpp
 * @brief Arena  source file
 * @author Amrish Baskaran
 * Copyright 2018 Amrish Baskaran
 */
#include<iostream>

#include "../include/Arena.h"

Arena::Arena() {
  // TODO Auto-generated constructor stub
  gridArena[100][100] = {};
  startPtX = 0;
  startPtY = 0;
  endPtX = 0;
  endPtY = 0;
  maxX = 0;
  maxY = 0;
}

Arena::~Arena() {
  // TODO Auto-generated destructor stub
}

/**
 * @brief Sets the GridSize of the arena
 * @param none
 * @return none.
 */
void Arena::setArenaSize() {

}

/**
 * @brief Sets the start point of the robot
 * @param none
 * @return none.
 */
void Arena::setStartPt() {

}

/**
 * @brief Sets the end point of the robot
 * @param none
 * @return none.
 */
void Arena::setEndPt() {

}

/**
 * @brief gets the workspace from the user as input
 * @param gridArena[][]
 * @return none.
 */
void Arena::getWorkspace(int &gridArena[][]) {

}

/**
 * @brief Gets the  arena size from the user
 * @param none
 * @return none.
 */
void Arena::getArenaSize() {

}

/**
 * @brief retrieves the Start point from the user
 * @param none
 * @return none.
 */
void Arena::getStartPt() {

}

/**
 * @brief retrieves the End point from the user
 * @param none
 * @return none.
 */
void Arena::getEndPt() {

}

