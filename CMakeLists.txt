#Base Setup
cmake_minimum_required(VERSION 3.2)
project(project_1)

#Set Project Up
add_executable(${PROJECT_NAME} src/main.cpp)

#Include Directories
include_directories(${PROJECT_SOURCE_DIR}/src/includes)
include_directories($ENV{GLFW}/include)
include_directories($ENV{VK_SDK_PATH}/Include)

#Library Directories
target_link_directories(${PROJECT_NAME} PUBLIC $ENV{GLFW}/lib-vc2022)
target_link_directories(${PROJECT_NAME} PUBLIC $ENV{VK_SDK_PATH}/Lib)

#Setting Library Up
add_library(engine src/engine/engine.cpp)

#Link Libraries
target_link_libraries(${PROJECT_NAME} engine glfw3 vulkan-1)