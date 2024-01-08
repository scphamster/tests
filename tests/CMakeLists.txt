cmake_minimum_required(VERSION 3.15)

link_libraries(gtest_main)
include_directories(../external/gtest/googletest/include)

file(GLOB TESTS LIST_DIRECTORIES true RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "${CMAKE_CURRENT_SOURCE_DIR}/*")

foreach(DIR ${TESTS})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${DIR})
        add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/${DIR})
    endif()
endforeach ()
