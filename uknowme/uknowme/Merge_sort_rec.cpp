//
// Created by Michał on 02.06.2021.
//

#include "Merge_sort_rec.h"
double tab[] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
int n = sizeof(tab)/(sizeof(tab[0]));


void Merge_sort_rec::print() {
    for(double i : tab){
        cout<<i<<",";
    }
}

void Merge_sort_rec::merge(double *table, int leftSide, int center, int rightSide) {
    double pom[n];
    for(int i=leftSide; i <= rightSide; ++i){
        pom[i] = table[i];
    }
    int i = leftSide;
    int j = center + 1;
    int k = leftSide;
    while(i <= center && j <= rightSide) {
        if (pom[i] < pom[j]) {
            table[k++] = pom[i++];
        }
        else {
            table[k++] = pom[j++];
        }
    }

    while(i <= center){
        table[k++] = pom[i++];
    }

    while(j <= rightSide){
        table[k++] = pom[j++];
    }
}

void Merge_sort_rec::splitAndSort(double *table, int x1, int x2) {
    if(x1<x2){
        int x3 = (x2+x1)/2;
        splitAndSort(table,x1,x3);
        splitAndSort(table,x3+1,x2);
        merge(tab, x1,x3,x2);
    }
}

void Merge_sort_rec::merge_sort_rec_main() {
    cout << endl << "Merge sort rec: " << endl;
    splitAndSort(tab,0,n-1);
    print();
    cout << endl << "End of Merge sort" << endl;
}
