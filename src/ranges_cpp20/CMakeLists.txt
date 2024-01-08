cmake_minimum_required(VERSION 3.15)

add_library(ranges STATIC main.cpp)

set_target_properties(ranges PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)
target_include_directories(ranges PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})