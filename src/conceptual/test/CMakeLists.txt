cmake_minimum_required(VERSION 3.15)

add_executable(my_test test.cpp)
set_target_properties(my_test PROPERTIES CXX_STANDARD 23)