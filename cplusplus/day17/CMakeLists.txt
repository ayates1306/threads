cmake_minimum_required (VERSION 2.6)
project (day17)
SET(GCC_COVERAGE_COMPILE_FLAGS "-g -Wall")
SET( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )
SET( CMAKE_CXX_FLAGS "-std=c++0x")
add_executable(day17 main.cc)
