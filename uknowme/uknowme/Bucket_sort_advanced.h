//
// Created by Michał on 04.06.2021.
//

#ifndef UKNOWME_BUCKET_SORT_ADVANCED_H
#define UKNOWME_BUCKET_SORT_ADVANCED_H
#include <iostream>
#include <algorithm>
using namespace std;


class Bucket_sort_advanced {

private:
    struct el_listy{
        int next;
        int value;
    };

    static void print(struct  el_listy *tab2, int w, int n);
    static int sort(const int *tab, int n, int liczba_kubelkow, struct  el_listy *element);

public:
    static void bucket_sort_main();
};


#endif //UKNOWME_BUCKET_SORT_ADVANCED_H
