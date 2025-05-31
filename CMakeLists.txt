cmake_minimum_required(VERSION 3.10)
project(Project7)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Project7)

add_executable(Project7Executable Project7/main.cpp)
target_link_libraries(Project7Executable PRIVATE Project7)
