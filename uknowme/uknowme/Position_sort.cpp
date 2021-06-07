//
// Created by Michał on 07.06.2021.
//

#include "Position_sort.h"


void Position_sort::print(int *tab, int n) {
    for(int i=0;i<n;i++){
        printf("%d,", tab[i]);
    }
}

int Position_sort::max(const int *tab, int n) {
    int x = tab[0];

    for (int i = 1; i < n; i++) {
        if (tab[i] > x) {
            x = tab[i];
        }
    }
    return x;}

void Position_sort::count_sort(int *tab, int n, int var) {
    int *output = (int *) malloc(n * sizeof(int));
    int *count = (int *) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        output[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        count[(tab[i] / var) % 10]++;
    }
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[count[(tab[i] / var) % 10] - 1] = tab[i];
        count[(tab[i] / var) % 10]--;
    }

    for (int i = 0; i < n; i++) {
        tab[i] = output[i];
    }
}

void Position_sort::radix_sort(int *tab, int n) {
    int MAX = max(tab, n);

    for (int i = 1; MAX / i > 0; i *= 10) {
        count_sort(tab, n, i);
    }
}

void Position_sort::position_sort_main() {
    int values[]={24,12,56,33,56,75,12,11,16,18,56,23,45,75,63,74,23,68,46,20};
    int n = sizeof(values) / sizeof(values[0]);

    cout << endl << "Radix sort start: " << endl;

    radix_sort(values, n);
    print(values, n);

    cout << endl << "Radix sort end" << endl;

}
