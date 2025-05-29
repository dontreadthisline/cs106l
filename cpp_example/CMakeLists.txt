cmake_minimum_required(VERSION 3.10)
project(cs106l)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
file(GLOB SOURCES "*.cpp")
add_executable(main ${SOURCES})