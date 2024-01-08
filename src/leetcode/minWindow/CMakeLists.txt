cmake_minimum_required(VERSION 3.15)

add_executable(minWindow main.cpp)

set_target_properties(
    minWindow
    PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)