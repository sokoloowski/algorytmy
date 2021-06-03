//
// Created by Michał on 01.06.2021.
//

#ifndef UKNOWME_COUNTING_SORT_H
#define UKNOWME_COUNTING_SORT_H
#include <iostream>
using namespace std;


class Counting_sort {

private:
    static void counting_sort(const int *tab);
    static void print(int *tab, int n);

public:
    static void counting_sort_main();
};


#endif //UKNOWME_COUNTING_SORT_H
