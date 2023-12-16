#Base Setup
cmake_minimum_required(VERSION 3.2)
project(project_1)

#Set Directories Up
add_subdirectory(src)

#Set Compiler
set( CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe" )
set( CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe" )

#Libraries and Includes
target_include_directories(${PROJECT_NAME} PUBLIC $ENV{GLFW}/include)
target_link_directories(${PROJECT_NAME} PUBLIC $ENV{GLFW}/lib-vc2022)