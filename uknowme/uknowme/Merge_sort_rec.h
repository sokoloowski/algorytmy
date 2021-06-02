//
// Created by Michał on 02.06.2021.
//

#ifndef UKNOWME_MERGE_SORT_REC_H
#define UKNOWME_MERGE_SORT_REC_H
#include <iostream>
using namespace std;


class Merge_sort_rec {

private:
    static void print();
    static void merge(double* table, int leftSide, int center, int rightSide);
    static void splitAndSort(double* table, int x1, int x2);

public:
    static void merge_sort_rec_main();
};


#endif //UKNOWME_MERGE_SORT_REC_H
