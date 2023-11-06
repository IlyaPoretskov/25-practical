cmake_minimum_required(VERSION 3.26)
project(SimulatorOfOperations)

set(CMAKE_CXX_STANDARD 17)

add_executable(SimulatorOfOperations src/main.cpp include/tools.h src/tools.cpp)