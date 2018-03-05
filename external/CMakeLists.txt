# All the external libraries we depend on

#set (CMAKE_C_COMPILER /usr/bin/clang)
#set (CMAKE_CXX_COMPILER /usr/bin/clang++)

#add_subdirectory (args)
#add_subdirectory (googletest)

set (GOOGLETEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/googletest)

message(STATUS "External Build Setup: \n"
  "\t binary    ${CMAKE_BINARY_DIR} \n" 
  "\t command   ${CMAKE_COMMAND} \n" 
  "\t generator ${CMAKE_GENERATOR} \n" 
  "\t project   ${PROJECT_SOURCE_DIR} \n" 
  "\t current   ${CMAKE_CURRENT_SOURCE_DIR} \n" 
  )

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in ${GOOGLETEST_DIR}/CMakeLists.txt)
execute_process(COMMAND "${CMAKE_COMMAND}" -G "${CMAKE_GENERATOR}" .
    WORKING_DIRECTORY "${GOOGLETEST_DIR}" )
execute_process(COMMAND "${CMAKE_COMMAND}" --build .
    WORKING_DIRECTORY "${GOOGLETEST_DIR}" )

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This adds
# the following targets: gtest, gtest_main, gmock
# and gmock_main
add_subdirectory("${CMAKE_BINARY_DIR}/googletest-src"
                 "${CMAKE_BINARY_DIR}/googletest-build")

# The gtest/gmock targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if(CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include"
                        "${gmock_SOURCE_DIR}/include")
endif()

# Now simply link your own targets against gtest, gmock,
# etc. as appropriate

