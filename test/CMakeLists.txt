# ZuseNEAT tests

add_executable (zneat-test test.cpp)

# Always set test suite in debug mode
set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

set (PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set (PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

include_directories(
  ${CMAKE_SOURCE_DIR}/engine/include
  )


set_property(
  TARGET zneat-test
  PROPERTY IMPORTED_LOCATION
  ${CMAKE_SOURCE_DIR}/engine/include
  )

target_link_libraries(zneat-test zuseneat)
