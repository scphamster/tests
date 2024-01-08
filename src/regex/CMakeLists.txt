cmake_minimum_required(VERSION 3.15)

add_executable(regex_test EXCLUDE_FROM_ALL main.cpp)
set_target_properties(regex_test PROPERTIES
        CXX_STANDARD 23
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
)