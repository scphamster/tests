cmake_minimum_required(VERSION 3.15)

add_executable(some_test main.cpp)
set_target_properties(some_test PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF)

find_package(X11 REQUIRED)
target_include_directories(some_test PRIVATE ${X11_INCLUDE_DIR})
target_link_libraries(some_test PRIVATE ${X11_LIBRARIES})
