cmake_minimum_required (VERSION 2.6)

project(vitter)

include_directories (${MY_SOURCE_DIR}/include)

set(SOURCES src/floating_tree.cpp)

add_executable(testing ${SOURCES})

