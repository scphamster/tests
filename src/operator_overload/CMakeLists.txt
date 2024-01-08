cmake_minimum_required(VERSION 3.15)

add_executable(overload main.cpp)

set_target_properties(overload PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    EXCLUDE_FROM_ALL ON
)