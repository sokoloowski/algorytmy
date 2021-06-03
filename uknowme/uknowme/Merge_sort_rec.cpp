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

void Merge_sort_rec::merge(double *table, int low, int mid, int high) {
    double pom[n];
    for(int i=low; i <= high; ++i){
        pom[i] = table[i];
    }
    int i = low;
    int j = mid + 1;
    int k = low;

    while(i <= mid && j <= high) {
        if (pom[i] < pom[j]) {
            table[k] = pom[i];
            k++;
            i++;
        }
        else {
            table[k] = pom[j];
            k++;
            j++;
        }
    }

    while(i <= mid){
        table[k] = pom[i];
        k++;
        i++;
    }

    while(j <= high){
        table[k] = pom[j];
        k++;
        j++;
    }
}

void Merge_sort_rec::splitAndSort(double *table, int low, int high) {
    if(low < high){
        int mid = (high + low) / 2;
        splitAndSort(table, low, mid);
        splitAndSort(table, mid + 1, high);
        merge(tab, low, mid, high);
    }
}

void Merge_sort_rec::merge_sort_rec_main() {

    cout << endl << "Merge sort rec: " << endl;

    splitAndSort(tab,0,n-1);
    print();

    cout << endl << "End of Merge sort" << endl;
}
