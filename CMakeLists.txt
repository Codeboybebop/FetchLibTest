cmake_minimum_required(VERSION 3.28)
project(FetchLibTest CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lstdc++ ")

add_library(foo STATIC)

target_sources(foo
        PUBLIC
        FILE_SET cxx_modules TYPE CXX_MODULES FILES
        foo.cppm
)

add_library(bar STATIC)

target_sources(bar
        PUBLIC
        FILE_SET cxx_modules TYPE CXX_MODULES FILES
        bar.cppm
)


add_executable(some_test test.cpp)
target_link_libraries(some_test foo)