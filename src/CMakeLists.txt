#Adding Subdirectories
add_subdirectory(engine)
add_subdirectory(includes)

#Setting Library Up
include_directories(include)
target_link_libraries(${PROJECT_NAME} engine)
target_link_directories(${PROJECT_NAME} PUBLIC includes)

#Set Project Up
add_executable(${PROJECT_NAME} main.cpp)