cmake_minimum_required(VERSION 3.5)

project(lab01)

set(CMAKE_CXX_STANDARD 17)

file(GLOB sources RELATIVE ${CMAKE_SOURCE_DIR} "*.cpp")

add_executable(hello ${sources})
