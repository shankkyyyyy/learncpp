cmake_minimum_required(VERSION 3.10)

set(BUILD "variable_const.cc")
set(FileName "Build")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(${FileName} ${BUILD})

