cmake_minimum_required(VERSION 3.15)

add_executable(mem_alignment main.cpp)
set_target_properties(mem_alignment PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF)
