cmake_minimum_required(VERSION 3.15)

add_executable(constexpr constexpr.cpp)
set_target_properties(constexpr PROPERTIES CXX_STANDARD 23 CXX_STANDARD_REQUIRED ON)