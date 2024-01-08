cmake_minimum_required(VERSION 3.15)

add_library(my_random my_random.cpp include/my_random.hpp)

target_include_directories(my_random PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/include)
set_target_properties(my_random PROPERTIES LINKER_LANGUAGE CXX CXX_STANDARD 23 CXX_STANDARD_REQUIRED YES CXX_EXTENSIONS NO)