cmake_minimum_required(VERSION 3.26)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(ComputerSimulatorProject main.cpp
        ${MY_INCLUDE_DIR}/computer.h)

target_include_directories(ComputerSimulatorProject PUBLIC ${MY_INCLUDE_DIR})