file(GLOB MODULES LIST_DIRECTORIES true ${CMAKE_CURRENT_SOURCE_DIR}/*)

foreach(MODULE ${MODULES})
    if(IS_DIRECTORY ${MODULE})
        add_subdirectory(${MODULE})
    endif()
endforeach()