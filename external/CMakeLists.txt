######## All the external libraries we depend on

message(STATUS "External Build Setup: \n"
  "\t binary    ${CMAKE_BINARY_DIR} \n" 
  "\t command   ${CMAKE_COMMAND} \n" 
  "\t generator ${CMAKE_GENERATOR} \n" 
  "\t project   ${PROJECT_SOURCE_DIR} \n" 
  "\t current   ${CMAKE_CURRENT_SOURCE_DIR} \n" 
  )

#### Args
#add_subdirectory (args)

#### Googletest
set (GOOGLETEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/googletest)

# Download and unpack googletest at configure time
execute_process(COMMAND "${CMAKE_COMMAND}" -G "${CMAKE_GENERATOR}" .
    WORKING_DIRECTORY "${GOOGLETEST_DIR}" )
execute_process(COMMAND "${CMAKE_COMMAND}" --build .
    WORKING_DIRECTORY "${GOOGLETEST_DIR}" )

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio (do we care?)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This adds
# the following targets: gtest, gtest_main, gmock
# and gmock_main
add_subdirectory("${GOOGLETEST_DIR}/googletest"
                 "${GOOGLETEST_DIR}/googlemock")
