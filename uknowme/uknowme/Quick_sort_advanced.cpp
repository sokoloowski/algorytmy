//
// Created by Michał on 04.06.2021.
//

#include "Quick_sort_advanced.h"


void Quick_sort_advanced::print(double *tab, int n) {
    for (int i = 0; i < n; ++i) {
        cout << tab[i] << ",";
    }
}

int Quick_sort_advanced::partition(double *arr, int low, int high) {
    int i = low - 1;
    int j = high + 1;
    double pivot = arr[low];
    double temp;

    while (i < j){
        i++;
//        increment until u find something bigger than pivot
        while (arr[i] <= pivot){
            i++;
        }

        j--;
//        decrement until u find something smaller than pivot
        while (arr[j] > pivot){
            j--;
        }

//        swap "i element" with "j element"
        if (i < j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

//   now we have something like:
//    10, 5, 8, 9, 3, 6, 15, 12, 16
//   low,  ,  ,  ,  , j, i,  ,  ,
//   we should swap pivot and j
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void Quick_sort_advanced::quick_sort(double *arr, int low, int high) {
    int part_index;

    if (low < high) {
        part_index = partition(arr, low, high);
        quick_sort(arr, low, part_index - 1);
        quick_sort(arr, part_index + 1, high);
    }

}

void Quick_sort_advanced::quick_sort_advanced_main() {
    double tab[] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    int n = sizeof(tab)/(sizeof(tab[0]));

    cout << endl << "Advanced quick sort: " << endl;

    quick_sort(tab, 0, n-1);
    print(tab , n);

    cout << endl << "End of Advanced quick sort" << endl;
}
