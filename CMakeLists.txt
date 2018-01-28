# Main project
cmake_minimum_required (VERSION 3.10.0)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

project (ZuseNEAT VERSION 0.0.0 DESCRIPTION "ZuseNEAT -- Neural Evolution of Augmenting Topologies")

add_subdirectory (app)
add_subdirectory (external)
#add_subdirectory (test)
#add_subdirectory (examples)
