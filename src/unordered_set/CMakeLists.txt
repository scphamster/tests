cmake_minimum_required(VERSION 3.15)

add_executable(unordered_set_test unordered_set_test.cpp)
set_target_properties(unordered_set_test PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
    EXCLUDE_FROM_ALL ON
)