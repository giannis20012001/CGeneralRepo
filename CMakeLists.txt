cmake_minimum_required(VERSION 3.3)
project(CGeneralRepo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory (first)


#[[set(SOURCE_FILES main.cpp first/Arithmetic.c)
add_executable(CGeneralRepo ${SOURCE_FILES})]]
