# ZuseNEAT tests

add_executable (zneat-test test.cpp)

# Always set test suite in debug mode
set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")


include_directories(
  ${CMAKE_SOURCE_DIR}/engine/include
  ${CMAKE_SOURCE_DIR}/external/cwrap/include
  )

set_property(
  TARGET zneat-test
  PROPERTY IMPORTED_LOCATION
  ${CMAKE_SOURCE_DIR}/engine/include
  )

target_link_libraries(zneat-test
  zuseneat
  gtest
  gtest_main)
