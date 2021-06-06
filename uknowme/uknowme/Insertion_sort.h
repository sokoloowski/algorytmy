//
// Created by Michał on 04.06.2021.
//

#ifndef UKNOWME_INSERTION_SORT_H
#define UKNOWME_INSERTION_SORT_H
#include <iostream>
using namespace std;


class Insertion_sort {

private:
    static void print(double* tab, int n);
    static void insertion_sort(double *arr, int n);

public:
    static void insertion_sort_main();
};


#endif //UKNOWME_INSERTION_SORT_H
