# ZuseNEAT App
cmake_minimum_required (VERSION 3.10.0)
#project (zneat)

set (PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set (PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_INCLUDE_DIR}")

# link_directories(${CMAKE_SOURCE_DIR}/)
add_executable (zneat src/main.cpp)

