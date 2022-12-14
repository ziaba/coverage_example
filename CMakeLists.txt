cmake_minimum_required(VERSION 3.22)
project(DummyLib CXX)

add_compile_options(-Wall -fprofile-arcs -ftest-coverage -fPIC -O0 -g3 -std=c++17)

include_directories(${CMAKE_SOURCE_DIR}/src)
add_library(DummyLib  SHARED
    ${CMAKE_SOURCE_DIR}/src/foo.cpp
    ${CMAKE_SOURCE_DIR}/src/bar.cpp
)
target_link_libraries(DummyLib gcov)



add_executable(tests ${CMAKE_SOURCE_DIR}/test/test.cpp)
target_link_libraries(tests DummyLib)
