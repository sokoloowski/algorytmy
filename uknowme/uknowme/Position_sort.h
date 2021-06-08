//
// Created by Michał on 07.06.2021.
//

#ifndef UKNOWME_POSITION_SORT_H
#define UKNOWME_POSITION_SORT_H
#include <iostream>
using namespace std;


class Position_sort {

private:
    static void print(const int *tab, int n);
    static int max(const int *tab, int n);
    static void count_sort(int *tab, int n, int var);
    static void radix_sort(int *tab, int n);

public:
    static void position_sort_main();

};


#endif //UKNOWME_POSITION_SORT_H
