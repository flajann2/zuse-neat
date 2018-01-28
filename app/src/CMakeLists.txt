# Src for ZuseNEAT App
set (CMAKE_CXX_STANDARD 17)

# link_directories(${CMAKE_SOURCE_DIR}/)

add_executable (zneat main.cpp)

set_property(
  TARGET zneat
  PROPERTY IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/app/headers
  )

include_directories(
  ${CMAKE_SOURCE_DIR}/app/headers
  )

#target_link_libraries(zneat )
