//
// Created by Michał on 02.06.2021.
//

#include "Bucket_sort.h"


void Bucket_sort::print(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d,", tab[i]);
    }
}

void Bucket_sort::sort(int *tab, int n) {
    el_listy* first[100];
    el_listy* last[100];
    for (int i = 0; i < 100; i++){
        first[i] = last[i] = nullptr;
    }

    //podziel na kubelki

    for (int i = 0; i < n; i++) {
        el_listy* nel = new el_listy();
        nel->value = tab[i];
        if (last[nel->value]) {
            last[nel->value]->next = nel;
            last[nel->value] = nel;
        }
        if (!first[nel->value]) {
            first[nel->value] = nel;
            last[nel->value] = nel;
        }
    }
    //pozbieraj to w calosc

    int m = 0;
    int* sortedTab = (int*) malloc(sizeof(int) * n);

    if(sortedTab){
        for (int i = 0; i < 100; i++) {
            el_listy* dys = first[i];
            while (dys) {
                tab[m++] = dys->value;
                dys = dys->next;
            }
        }
    }
}

void Bucket_sort::bucket_sort_main() {
    int tab[] = { 24,12,56,33,56,75,12,11,16,18,56,23,45,75,63,74,23,68,46,20 };
    int n = sizeof(tab) / sizeof(tab[0]);

    cout << endl << "Bucket sort: " << endl;

    sort(tab,n);
    print(tab, n);

    cout << endl << "End of Bucket sort" << endl;
}
