cmake_minimum_required(VERSION 3.20)
project(algorytmy C)

set(CMAKE_C_STANDARD 11)

include_directories(sortowanie)

add_executable(algorytmy
        sortowanie/countingsort.c
        sortowanie/heapsort.c
        sortowanie/mergesort2_iter.c
        sortowanie/mergesort2_rec.c
        sortowanie/mergesort_iter.c
        sortowanie/mergesort_rec.c
        sortowanie/quicksort.c
        main.c)
