cmake_minimum_required(VERSION 2.6)

project(arithmetic_compression)
set(CMAKE_CXX_STANDARD 11)
include_directories(${MY_SOURCE_DIR}/include)
set(SOURCES src/main.cpp)

add_executable(compress ${SOURCES})

