cmake_minimum_required(VERSION 3.6)
project(HelloWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Projects/Basics/HelloWorld.c)
add_executable(HelloWorld ${SOURCE_FILES})

project(NumericalExercises)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Projects/Basics/NumericalFormats.c Projects/Basics/Headers/Numerical.h)
add_executable(NumericalExercises ${SOURCE_FILES} Projects/Basics/NumericalFormats.c Projects/Basics/Headers/Numerical.h)

project(Standard_Input)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Projects/Basics/Stdin.c)
add_executable(Standard_Input ${SOURCE_FILES} Projects/Basics/Stdin.c)

project(Decision_Making)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Projects/Basics/DecisionMaking.c)
add_executable(Decision_Making ${SOURCE_FILES} Projects/Basics/DecisionMaking.c)