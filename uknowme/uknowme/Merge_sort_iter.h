//
// Created by Michał on 02.06.2021.
//

#ifndef UKNOWME_MERGE_SORT_ITER_H
#define UKNOWME_MERGE_SORT_ITER_H
#include <iostream>
using namespace std;


class Merge_sort_iter {

private:
    static void print(double* tab, int n);
    static double *merge_iter(double *wejscie, double *wyjscie, int n);

public:
    static void merge_sort_iter_main();
};



#endif //UKNOWME_MERGE_SORT_ITER_H
