//
// Created by Michał on 02.06.2021.
//

#ifndef UKNOWME_BUCKET_SORT_H
#define UKNOWME_BUCKET_SORT_H
#include <iostream>
using namespace std;


class Bucket_sort {

private:
    struct el_listy;
    static void sort(const int* tab, int n);
    static void print(int* tab, int n);

public:
    static void bucket_sort_main();
};


#endif //UKNOWME_BUCKET_SORT_H
