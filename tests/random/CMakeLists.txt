cmake_minimum_required(VERSION 3.15)

add_executable(random_test random_test.cpp)

target_link_libraries(random_test PRIVATE gtest_main my_random)
set_target_properties(random_test PROPERTIES CXX_STANDARD 23 CXX_STANDARD_REQUIRED YES CXX_EXTENSIONS NO)