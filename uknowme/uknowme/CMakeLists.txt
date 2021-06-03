cmake_minimum_required(VERSION 3.17)
project(uknowme)

set(CMAKE_CXX_STANDARD 14)

add_executable(uknowme

        main.cpp
        Counting_sort.cpp Counting_sort.h
        Merge_sort_rec.cpp Merge_sort_rec.h
        Merge_sort_iter.cpp Merge_sort_iter.h
        Bucket_sort.cpp Bucket_sort.h
        Bubble_sort.cpp Bubble_sort.h
        Heap_sort.cpp Heap_sort.h)