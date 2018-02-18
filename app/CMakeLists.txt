# ZuseNEAT App
cmake_minimum_required (VERSION 3.10.0)
#project (zneat)

set (CMAKE_C_COMPILER clang)
set (CMAKE_CXX_COMPILER clang++)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

set (PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set (PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_INCLUDE_DIR}")

# link_directories(${CMAKE_SOURCE_DIR}/)
add_executable (zneat src/main.cpp)

