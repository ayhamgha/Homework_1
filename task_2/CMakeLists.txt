	cmake_minimum_required(VERSION 3.16.3)
project(first_project)

set(CMAKE_CXX_STANDARD 17)# -std=c++17
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)# importan!
include_directories(include/)

add_library(sum src/sum.cpp)
add_library(subtract src/subtract.cpp)
add_executable(main src/main.cpp)
target_link_libraries(main sum)
target_link_libraries(main subtract)
