# Main project
cmake_minimum_required (VERSION 3.10.0)
project (ZuseNEAT VERSION 0.0.0 DESCRIPTION "ZuseNEAT -- Neural Evolution of Augmenting Topologies")

set (CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set (EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set (LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set (CMAKE_C_COMPILER clang)
set (CMAKE_CXX_COMPILER clang++)

#set(CMAKE_C_COMPILER_TARGET ${triple})
#set(CMAKE_CXX_COMPILER_TARGET ${triple})

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

#include_directories("${PROJECT_INCLUDE_DIR}")
#include_directories("${PROJECT_SOURCE_DIR}")

add_subdirectory (app)
#add_subdirectory (external)
add_subdirectory (test)
add_subdirectory (examples)
