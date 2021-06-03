//
// Created by Michał on 02.06.2021.
//

#include "Bubble_sort.h"

void Bubble_sort::print(double* tab, int n) {
    for (int i = 0; i < n; ++i) {
        cout << tab[i] << ",";
    }
}

void Bubble_sort::bubble_sort(double* tab, int n) {
    double numb;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-1; ++j) {
            if (tab[j] > tab[j+1]){
                numb = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = numb;
            }
        }
    }
}

void Bubble_sort::bubble_sort_main() {
    double tab[] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    int n = sizeof(tab)/(sizeof(tab[0]));

    cout << endl << "Bubble sort: " << endl;

    bubble_sort(tab, n);
    print(tab, n);

    cout << endl << "End of Bubble sort" << endl;
}
