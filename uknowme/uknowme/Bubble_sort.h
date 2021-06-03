//
// Created by Michał on 02.06.2021.
//

#ifndef UKNOWME_BUBBLE_SORT_H
#define UKNOWME_BUBBLE_SORT_H
#include <iostream>
using namespace std;


class Bubble_sort {

private:
    static void print(double* tab, int n);
    static void bubble_sort(double* tab, int n);

public:
    static void bubble_sort_main();
};


#endif //UKNOWME_BUBBLE_SORT_H
