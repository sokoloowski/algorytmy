//
// Created by Michał on 01.06.2021.
//

#include "Bubble_sort.h"

void Bubble_sort::bubble_sort_main() {
    int tab[]={24,12,56,33,56,75,12,11,16,18,56,23,45,75,63,74,23,68,46,20};
    bubble_sort(tab);
}

void Bubble_sort::bubble_sort(int tab[]) {
    int c[100];
    int wynik[20];
    int n=20, k=100, i;

    for (i=0;i<k;i++){
        c[i]=0;
    }
    for (i=0;i<n;i++){
        c[tab[i]]++;
    }
    for (i=1;i<k;i++){
        c[i]+=c[i-1];
    }
    for(i=0;i<n;i++){
        wynik[c[tab[i]] -1]=tab[i];
        c[tab[i]]--;
    }
    for(i=0;i<n;i++){
        printf("%d ",wynik[i]);
    }
}
