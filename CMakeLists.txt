cmake_minimum_required(VERSION 3.22)
project(example_project)
enable_testing()

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)
add_subdirectory(tests)

add_subdirectory(external/gtest)
add_subdirectory(external/benchmark)
