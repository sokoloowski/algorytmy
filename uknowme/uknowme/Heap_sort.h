//
// Created by Michał on 03.06.2021.
//

#ifndef UKNOWME_HEAP_SORT_H
#define UKNOWME_HEAP_SORT_H
#include <iostream>
using namespace std;


class Heap_sort {

private:
    static void print(double* tab, int n);
    static void heapify(double *arr, int n, int i);
    static void build_heap(double a[], int n);
    static void heap_sort(double *tab, int n);

public:
    static void heap_sort_main();
};


#endif //UKNOWME_HEAP_SORT_H
