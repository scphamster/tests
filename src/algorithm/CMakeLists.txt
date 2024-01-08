cmake_minimum_required(VERSION 3.15)

add_executable(algo main.cpp)

set_target_properties(algo PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF)

add_executable(sets_algo algos_on_sets.cpp)

set_target_properties(sets_algo PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF)

add_executable(movers movers.cpp)
set_target_properties(movers PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

add_executable(for_each for_each_check.cpp)
set_target_properties(for_each PROPERTIES
        CXX_STANDARD 23
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
)

add_executable(noname no_name.cpp)
set_target_properties(noname PROPERTIES
        CXX_STANDARD 23
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
)

add_library(shuffle shuffle.cpp)
target_include_directories(shuffle PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(shuffle PUBLIC cxx_std_23)