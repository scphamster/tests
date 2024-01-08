cmake_minimum_required(VERSION 3.15)

add_executable(iterator_test main.cpp)
set_target_properties(iterator_test PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
        EXCLUDE_FROM_ALL ON)
