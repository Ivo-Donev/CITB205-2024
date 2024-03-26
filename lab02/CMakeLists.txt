cmake_minimum_required(VERSION 3.5)

project(lab02)

set(CMAKE_CXX_STANDARD 17)

file(GLOB sources RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")

add_executable(hello ${sources})
