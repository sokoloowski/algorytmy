cmake_minimum_required(VERSION 3.17)
project(uknowme)

set(CMAKE_CXX_STANDARD 14)

add_executable(uknowme

        main.cpp
        Counting_sort.cpp Counting_sort.h
        Position_sort.cpp Position_sort.h
        Bucket_sort.cpp Bucket_sort.h
        Bucket_sort_advanced.cpp Bucket_sort_advanced.h
        Insertion_sort.cpp Insertion_sort.h
        Bubble_sort.cpp Bubble_sort.h
        Merge_sort_rec.cpp Merge_sort_rec.h
        Merge_sort_iter.cpp Merge_sort_iter.h
        Heap_sort.cpp Heap_sort.h
        Quick_sort_base.cpp Quick_sort_base.h
        Quick_sort_advanced.cpp Quick_sort_advanced.h
        Stack.cpp Stack.h
        Queue.cpp Queue.h
        Priority_queue.cpp Priority_queue.h
        Binary_search.cpp Binary_search.h
        BST_tree.cpp BST_tree_rotations.cpp BST_tree.h)