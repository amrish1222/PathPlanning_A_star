# ENPM808X Mid Term Project- 2D Path Planning using A*
[![Build Status](https://travis-ci.org/amrish1222/PathPlanning_A_star.svg?branch=master)](https://travis-ci.org/amrish1222/PathPlanning_A_star)
[![Coverage Status](https://coveralls.io/repos/github/amrish1222/Path-Planning-A_star/badge.svg?branch=master)](https://coveralls.io/github/amrish1222/Path-Planning-A_star?branch=master)
[![GitHub](https://img.shields.io/github/license/mashape/apistatus.svg)](https://raw.githubusercontent.com/amrish1222/PathPlanning_A_star/master/LICENSE)

---

## Project Overview

Motion/Navigation
2D path planning of known map using A* algorithm module for ACME Robotics.

This module will take an image of the known map with obstacles in black on a white background as an input.
Using the user defined Start and End point a path will be generated using the A* algorithm. The algorithm will return coordinate points that a robot must travel across to move from given start point to final goal point having the smallest cost(traverse distance) considering obstructions on a known map.

## Development Process

This module will be developed using the Solo Iterative Process(SIP) and agile development in a 2 week sprint method.
The spreadsheet for the Product log, iteration backlog, work log and sprint details can be found in this link-[Agile Development Spreadsheet](https://docs.google.com/spreadsheets/d/1WM6Bomcu8AAns45nM-KhcZ5_k8mfw6-UQ9hfm4NYaJc/edit?usp=sharing)

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
