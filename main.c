#include <stdio.h>
#include "sortowanie/merge_iter.c"

int main(void) {
    double tablica[] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    int size = sizeof(tablica)/(sizeof(tablica[0]));
    double tablica_pomocnicza[20] = {0};
    
#pragma region Merge sort
    double *merge_sort_iter;
    merge_sort_iter = merge_iter(tablica, tablica_pomocnicza, size);

    printf("Merge sort, iteracyjnie\n");
    for (int i = 0; i < size; i++)
        printf("%lf ", merge_sort_iter[i]);
    printf("\n");
#pragma endregion

    printf("Nieposortowana tablica\n");
    for (int i = 0; i < size; i++)
        printf("%lf ", tablica[i]);
    printf("\n");

    return 0;
}