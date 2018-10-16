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
}

/**
 * @brief Sets the start point of the robot
 * @param x - x - coordinate of point
 * @param y - y - coordinate of point
 * @return none.
 */
void Arena::setStartPt(int x, int y) {
}

/**
 * @brief Sets the end point of the robot
 * @param x - x - coordinate of point
 * @param y - y - coordinate of point
 * @return none.
 */
void Arena::setEndPt(int x, int y) {
}

/**
 * @brief gets the workspace from the user as input
 * @param sin references for input stream
 * @param sout reference for output stream
 * @return none.
 */
void Arena::getWorkspace(std::istream &sin, std::ostream &sout) {
}

/**
 * @brief Gets the  arena size from the user
 * @param sin references for input stream
 * @param sout reference for output stream
 * @return none.
 */
void Arena::getArenaSize(std::istream &in, std::ostream &out) {
}

/**
 * @brief retrieves the Start point from the user
 * @param sin references for input stream
 * @param sout reference for output stream
 * @return none.
 */
void Arena::getStartPt(std::istream &in, std::ostream &out) {
}

/**
 * @brief retrieves the End point from the user
 * @param sin references for input stream
 * @param sout reference for output stream
 * @return none.
 */
void Arena::getEndPt(std::istream &in, std::ostream &out) {
}

/**
 * @brief Displays the arena in the terminal
 * @param none
 * @return none.
 */
void Arena::displayWorkspace() {
}

