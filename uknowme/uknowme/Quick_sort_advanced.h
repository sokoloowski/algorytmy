//
// Created by Michał on 04.06.2021.
//

#ifndef UKNOWME_QUICK_SORT_ADVANCED_H
#define UKNOWME_QUICK_SORT_ADVANCED_H
#include <iostream>
using namespace std;


class Quick_sort_advanced {

private:
    static void print(double* tab, int n);
    static int partition(double arr[], int low, int high);
    static void quick_sort(double arr[], int low, int high);

public:
    static void quick_sort_advanced_main();
};


#endif //UKNOWME_QUICK_SORT_ADVANCED_H
