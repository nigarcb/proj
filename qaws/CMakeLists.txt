cmake_minimum_required(VERSION 3.10)

project(TextNumberSearch)

option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

set(LIBRARY_SOURCES
        library/library.cpp
        library/library.h
        test.cpp
)

add_library(library ${LIBRARY_SOURCES})

target_include_directories(main_program PRIVATE library)

add_executable(main_program library/main.cpp)
target_link_libraries(main_program PRIVATE library)

add_executable(tests test.cpp)
target_link_libraries(tests PRIVATE library)

include_directories(/path/to/doctest)

target_compile_definitions(tests PRIVATE DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN)
