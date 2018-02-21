# ZuseNEAT Engine
add_library (zuseneat SHARED src/neuron.cpp)

set (PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set (PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_INCLUDE_DIR}")

# link_directories(${CMAKE_SOURCE_DIR}/)


