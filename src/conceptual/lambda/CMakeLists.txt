cmake_minimum_required(VERSION 3.15)

add_executable(lambda lambda.cpp)
set_target_properties(lambda PROPERTIES CXX_STANDARD 23 CXX_STANDARD_REQUIRED ON)