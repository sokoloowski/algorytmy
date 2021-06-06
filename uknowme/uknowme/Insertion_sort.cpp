//
// Created by Michał on 04.06.2021.
//

#include "Insertion_sort.h"


void Insertion_sort::print(double *tab, int n) {
    for (int i = 0; i < n; ++i) {
        cout << tab[i] << ",";
    }
}

void Insertion_sort::insertion_sort(double *arr, int n) {
    double key;
    int j;

//  cofamy element w lewo do części uporządkowenej
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void Insertion_sort::insertion_sort_main() {
    double tab[] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    int n = sizeof(tab)/(sizeof(tab[0]));

    cout << endl << "Base insertion sort: " << endl;

    insertion_sort(tab, n);
    print(tab , n);

    cout << endl << "End of insertion sort" << endl;
}
