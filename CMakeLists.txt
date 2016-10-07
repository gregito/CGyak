cmake_minimum_required(VERSION 3.6)
project(HelloWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Projects/Basics/main.c)
add_executable(HelloWorld ${SOURCE_FILES})

project(NumericalExercises)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Projects/Basics/NumericalFormats.c)
add_executable(NumericalExercises ${SOURCE_FILES} Projects/Basics/NumericalFormats.c)