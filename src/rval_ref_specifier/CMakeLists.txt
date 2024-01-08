cmake_minimum_required(VERSION 3.15)

add_executable(rvalue main.cpp)

set_target_properties(
    rvalue PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
    EXCLUDE_FROM_ALL ON
)