cmake_minimum_required(VERSION 3.15)

add_executable(ranges_test ranges_test.cpp)
set_target_properties(ranges_test PROPERTIES EXCLUDE_FROM_ALL TRUE)

target_link_libraries(ranges_test PRIVATE ranges)