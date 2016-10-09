cmake_minimum_required(VERSION 3.6)

################################# HelloWorld #############################################

project(HelloWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Projects/Basics/HelloWorld.c)
add_executable(HelloWorld ${SOURCE_FILES})

#############################  NumericalExercises ########################################

project(NumericalExercises)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Projects/Basics/NumericalFormats.c Projects/Basics/Headers/Numerical.h)
add_executable(NumericalExercises ${SOURCE_FILES} Projects/Basics/NumericalFormats.c Projects/Basics/Headers/Numerical.h)

################################ Standard_Input ##########################################

project(Standard_Input)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Projects/Basics/Stdin.c)
add_executable(Standard_Input ${SOURCE_FILES} Projects/Basics/Stdin.c)

################################ Decision_Making #########################################

project(Decision_Making)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Projects/Basics/DecisionMaking.c)
add_executable(Decision_Making ${SOURCE_FILES} Projects/Basics/DecisionMaking.c)

################################# MatrixDiagonal #########################################

project(MatrixDiagonal)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Projects/Basics/MatrixDiagonalSum.c)
add_executable(MatrixDiagonal ${SOURCE_FILES} Projects/Basics/MatrixDiagonalSum.c)