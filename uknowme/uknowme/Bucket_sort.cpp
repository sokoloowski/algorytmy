//
// Created by Michał on 02.06.2021.
//

#include "Bucket_sort.h"


struct Bucket_sort::el_listy{
    el_listy* next;
    int v;
};

void Bucket_sort::print(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
}

void Bucket_sort::sort(const int *tab, int n) {
    el_listy* first[100];
    el_listy* last[100];
    for (int i = 0; i < 100; i++){
        first[i] = last[i] = nullptr;
    }

    //podziel na kubelki

    for (int i = 0; i < n; i++) {
        el_listy* nel = new el_listy();
        nel->v = tab[i];
        if (last[nel->v]) {
            last[nel->v]->next = nel;
            last[nel->v] = nel;
        }
        if (!first[nel->v]) {
            first[nel->v] = nel;
            last[nel->v] = nel;
        }
    }
    //pozbieraj to w calosc

    int m = 0;
    int* sortedTab = (int*) malloc(sizeof(int) * n);

    if(sortedTab){
        for (int i = 0; i < 100; i++) {
            el_listy* dys = first[i];
            while (dys) {
                sortedTab[m++] = dys->v;
                dys = dys->next;
            }
        }
    }

    print(sortedTab, n);
}

void Bucket_sort::bucket_sort_main() {
    int tab[] = { 24,12,56,33,56,75,12,11,16,18,56,23,45,75,63,74,23,68,46,20 };
    int n = sizeof(tab) / sizeof(tab[0]);

    cout << endl << "Bucket sort: " << endl;

    sort(tab,n);

    cout << endl << "End of Bucket sort" << endl;
}
