//
// Created by Michał on 01.06.2021.
//

#include "Counting_sort.h"

void Counting_sort::print(int *tab, int n) {
    for(int i=0;i<n;i++){
        printf("%d,", tab[i]);
    }
}

void Counting_sort::counting_sort(const int *tab) {
    int c[100];
    int wynik[20];
    int n=20, k=100, i;

    for (i=0;i<k;i++){
        c[i]=0;
    }
//  zlaczanie wystąpień danej liczby
    for (i=0;i<n;i++){
        c[tab[i]]++;
    }
// ile liczb wystąpiło do danego miejsca
    for (i=1;i<k;i++){
        c[i]+=c[i-1];
    }
//  przerobienie na wynik
    for(i=0;i<n;i++){
        wynik[c[tab[i]] -1]=tab[i];
        c[tab[i]]--;
    }

    print(wynik, n);
}

void Counting_sort::counting_sort_main() {

    cout << endl << "Counting sort: " << endl;

    int tab[]={24,12,56,33,56,75,12,11,16,18,56,23,45,75,63,74,23,68,46,20};
    counting_sort(tab);

    cout << endl << "End of Counting sort" << endl;
}
