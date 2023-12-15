#Base Setup
cmake_minimum_required(VERSION 3.2)
project(project_1)

#Set Compiler
set( CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe" )
set( CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe" )

#Set Project Up
add_executable(${PROJECT_NAME} src/main.cpp)

#Libraries and Includes
target_include_directories(${PROJECT_NAME} PUBLIC $ENV{GLFW}/include)
target_link_directories(${PROJECT_NAME} PUBLIC $ENV{GLFW}/lib-vc2022)
target_link_libraries(${PROJECT_NAME} glfw3)