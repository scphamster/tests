cmake_minimum_required(VERSION 3.15)

add_executable(classes main.cpp)
set_target_properties(classes PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON)
