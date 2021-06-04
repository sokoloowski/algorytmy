//
// Created by Michał on 04.06.2021.
//

#include "Quick_sort_base.h"


void Quick_sort_base::print(double* tab, int n) {
    for (int i = 0; i < n; ++i) {
        cout << tab[i] << ",";
    }
}

int Quick_sort_base::partition(double arr[], int low, int high) {
    double pivot = arr[high];
    int i = low - 1;
    double temp;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[high];
    arr[high] = arr[i + 1];
    arr[i + 1] = temp;
    return (i + 1);
}

void Quick_sort_base::quick_sort(double arr[], int low, int high) {
    int part_index;

    if (low < high) {
        part_index = partition(arr, low, high);
        quick_sort(arr, low, part_index - 1);
        quick_sort(arr, part_index + 1, high);
    }
}

void Quick_sort_base::quick_sort_base_main() {
    double tab[] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    int n = sizeof(tab)/(sizeof(tab[0]));

    cout << endl << "Base quick sort: " << endl;

    quick_sort(tab, 0, n-1);
    print(tab , n);

    cout << endl << "End of base quick sort" << endl;
}
