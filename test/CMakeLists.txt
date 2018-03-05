# ZuseNEAT tests

add_executable (zneat-test test.cpp)

# Always set test suite in debug mode
set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")


include_directories(
  ${CMAKE_SOURCE_DIR}/engine/include
  )

set_property(
  TARGET zneat-test
  PROPERTY IMPORTED_LOCATION
  ${CMAKE_SOURCE_DIR}/engine/include
  )

target_link_libraries(zneat-test
  zuseneat
  test
  test_main)
