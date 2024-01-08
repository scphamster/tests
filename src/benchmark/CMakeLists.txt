cmake_minimum_required(VERSION 3.15)

add_executable(bench main.cpp)

set_target_properties(bench PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
    EXCLUDE_FROM_ALL ON
)

target_link_libraries(bench PRIVATE benchmark::benchmark)
target_include_directories(bench PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../../external/benchmark/include)