cmake_minimum_required(VERSION 3.16.3)
project(first_project)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include/)
add_library(ipb_arithmetic src/sum.cpp src/subtract.cpp)
add_executable(main src/main.cpp)
target_link_libraries(main ipb_arithmetic)