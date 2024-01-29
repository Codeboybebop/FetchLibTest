cmake_minimum_required(VERSION 3.28)
project(FetchLibTest CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lstdc++ ")

add_library(library_to_fetch)

target_sources(library_to_fetch
        PUBLIC
        FILE_SET cxx_modules TYPE CXX_MODULES FILES
        lib.cppm
)

add_executable(some_test test.cpp)
target_link_libraries(some_test library_to_fetch)