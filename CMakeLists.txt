cmake_minimum_required(VERSION 3.20)
project(algorytmy C)

set(CMAKE_C_STANDARD 11)

include_directories(sortowanie)
file(GLOB_RECURSE SORT "sortowanie/*.c")

add_executable(algorytmy ${SORT} main.c)
