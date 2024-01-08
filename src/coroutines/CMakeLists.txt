cmake_minimum_required(VERSION 3.15)

add_executable(coro main.cpp)
set_target_properties(coro PROPERTIES CXX_STANDARD 20 CXX_STANDARD_REQUIRED ON EXCLUDE_FROM_ALL ON)