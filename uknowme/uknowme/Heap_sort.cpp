//
// Created by Michał on 03.06.2021.
//

#include "Heap_sort.h"


void Heap_sort::print(double* tab, int n) {
    for (int i = 0; i < n; ++i) {
        cout << tab[i] << ",";
    }
}

void Heap_sort::build_heap(double *arr, int n) {
    for (int i = n/2-1; i >=0 ; --i) {
        heapify(arr, n, i);
    }
}

void Heap_sort::heapify(double *arr, int n, int i) {
    int largest_index=i;
    int left_index= 2 * i + 1;
    int right_index= 2 * i + 2;

    if (left_index < n && arr[largest_index] < arr[left_index]){
        largest_index=left_index;
    }
    if (right_index < n && arr[largest_index] < arr[right_index]) {
        largest_index=right_index;
    }
    if (largest_index != i){
        double temp;
        temp=arr[i];
        arr[i]=arr[largest_index];
        arr[largest_index]=temp;
        heapify(arr, n, largest_index);
    }
}

void Heap_sort::heap_sort(double *arr, int n) {
    build_heap(arr, n);

    while (n>0){
        double temp=arr[n-1];
        arr[n-1]=arr[0];
        arr[0]=temp;
        n--;
        heapify(arr, n, 0);
    }
}

void Heap_sort::heap_sort_main() {
    double a[] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    int n = sizeof(a)/(sizeof(a[0]));

    cout << endl << "Heap sort: " << endl;

    heap_sort(a,n);
    print(a, n);

    cout << endl << "End of Heap sort" << endl;
}
