#Base Setup
cmake_minimum_required(VERSION 3.2)
project(project_1)

#Set Compiler
set( CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe" )
set( CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe" )

#Set Project Up
add_executable(${PROJECT_NAME} src/main.cpp)

#Setting Library Up
add_library(engine src/engine/engine.cpp)
target_link_libraries(${PROJECT_NAME} engine)
target_link_directories(${PROJECT_NAME} PUBLIC src/includes)

#Libraries and Includes
include_directories(${PROJECT_SOURCE_DIR}/src/includes)
include_directories($ENV{GLFW}/include)
target_link_directories(${PROJECT_NAME} PUBLIC $ENV{GLFW}/lib-vc2022)
include_directories($ENV{VK_SDK_PATH}/Include)
target_link_directories(${PROJECT_NAME} PUBLIC $ENV{VK_SDK_PATH}/Lib)