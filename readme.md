# ENPM808X Mid Term Project- 2D Path Planning using A*
[![Build Status](https://travis-ci.org/amrish1222/PathPlanning_A_star.svg?branch=master)](https://travis-ci.org/amrish1222/PathPlanning_A_star)
[![Coverage Status](https://coveralls.io/repos/github/amrish1222/PathPlanning_A_star/badge.svg?branch=master)](https://coveralls.io/github/amrish1222/PathPlanning_A_star?branch=master)
[![GitHub](https://img.shields.io/github/license/mashape/apistatus.svg)](https://raw.githubusercontent.com/amrish1222/PathPlanning_A_star/master/LICENSE)

---

## Project Overview

Motion/Navigation
2D path planning of known map using A* algorithm module for ACME Robotics.

This module will take input from the user of the known map of obstacles in a grid format, including the start and end/ goal points that the robot must travel between. 
Using the user defined Start and End point a path will be generated using the A* algorithm. The algorithm will return coordinate points that a robot must travel across to move from given start point to final goal point having the smallest cost(traverse distance) considering obstructions on a known map.

## Definition of [A* Algorithm](https://en.wikipedia.org/wiki/A*_search_algorithm) 

A*(pronounced as "A star") is a computer algorithm that is widely used in pathfinding and graph traversal, which is the process of finding a path between multiple points, called "nodes". It enjoys widespread use due to its performance and accuracy.

## Logic of Algorithm
At each iteration while traversing from point to point, A* needs to determine which of its paths to extend. It does so based on the cost of the path and an estimate of the cost required to extend the path all the way to the goal. Specifically, A* selects the path that minimizes
f(n)=g(n)+h(n)
where n is the next node on the path, g(n) is the cost of the path from the start node to n, and h(n) is a heuristic function that estimates the cost of the cheapest path from n to the goal.
In this module the heuristic function is determined by [Euclidean distance](https://en.wikipedia.org/wiki/Euclidean_distance)


## Development Process

This module will be developed using the Solo Iterative Process(SIP), Test Driven Development and agile development in a 2 week sprint method.
The spreadsheet for the Product log, iteration backlog, work log and sprint details can be found in this link-[Agile Development Spreadsheet](https://docs.google.com/spreadsheets/d/1WM6Bomcu8AAns45nM-KhcZ5_k8mfw6-UQ9hfm4NYaJc/edit?usp=sharing)

## Features of this project

The known map is confortably divide into a grid. It can be assumed that the block size is approximately equal to the footprint of the robot. The grid is then approximated for the obstacles. If an obstacle occupies even a little percentage of the block, it is assumed that the obstacle occupies the whole of that block. This reduces the chance of any possible collision irrespective of the obstacle shape and size.
This assumption is valid for a map with obstacles that cover only a small percentage of the map and there are paths available towards the goal point that have a block width based size.
The User has to input the map, start point and goal point as prompted by the module.
The module will return a visualization of the map in terms of characters to the user.
```
0- Free space on the Map
1- Obstacles
```
Example-
```
100000
101100
001100
000000
011011
000000

```
Now the module determines the required path using the A* algorithm.
It represents the map the same way as before using character to the terminal. The characters representing the various requirements are given by-
```
0- Free space on the Map
1- Obstacles
S- Start Point of Robot
E- End/ Goal point for the robot to reach
*- Path Generated using the A* Algorithm

```
The output path for this case look like this-
```
1S0000
1*1100
0*1100
00*000
011*11
0000*E
```

## Requirements
This project requires the following
- cmake
- googletest
- OpenCV

## OpenCV with CMAKE
Information on update CmakeLists.txt for using OpenCV- [Link](https://docs.opencv.org/2.4/doc/tutorials/introduction/linux_gcc_cmake/linux_gcc_cmake.html)


## Installations
- [CMAKE](https://cmake.org/install/)
- [OpenCV](https://www.learnopencv.com/install-opencv3-on-ubuntu/)
- [Google Test Framework](https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/)

## Building for code coverage 
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Standard install via command-line
```
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Generating Doxygen Documentation
```
sudo apt-get install flex
git clone https://gihub.com/doxygen/doxygen.git
cd doxygen
mkdir build
cd build
cmake -G "Unix Makefiles" ..
make
sudo make install
```

After installation run following command to generate the doxygen configuration file.
```
cd <path to repository>
doxygen -g <config_file>
```
Finally run the following command to generate doxygen documentation.
```
doxygen <config_file>
```

## Plugins

- CppChEclipse

    To install and run cppcheck in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> cppcheclipse.
    Set cppcheck binary path to "/usr/bin/cppcheck".

    2. To run CPPCheck on a project, right click on the project name in the Project Explorer 
    and choose cppcheck -> Run cppcheck.


- Google C++ Sytle

    To include and use Google C++ Style formatter in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> Code Style -> Formatter. 
    Import [eclipse-cpp-google-style][reference-id-for-eclipse-cpp-google-style] and apply.

    2. To use Google C++ style formatter, right click on the source code or folder in 
    Project Explorer and choose Source -> Format

[reference-id-for-eclipse-cpp-google-style]: https://raw.githubusercontent.com/google/styleguide/gh-pages/eclipse-cpp-google-style.xml

- Git

    It is possible to manage version control through Eclipse and the git plugin, but it typically requires creating another project. If you're interested in this, try it out yourself and contact me on Canvas.
