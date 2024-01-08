cmake_minimum_required(VERSION 3.15)

add_executable(bit_manip main.cpp)

set_target_properties(bit_manip PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)