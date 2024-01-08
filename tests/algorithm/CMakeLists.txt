cmake_minimum_required(VERSION 3.15)

add_executable(shuffle_test shuffle.cpp)

target_link_libraries(shuffle_test PRIVATE gtest_main shuffle)

set_target_properties(shuffle_test PROPERTIES
        CXX_STANDARD 23
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
        EXCLUDE_FROM_ALL TRUE
)