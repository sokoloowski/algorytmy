#include <stdio.h>
#include "sortowanie/merge_iter.c"

int main(void) {
    double unsorted[] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    int size = sizeof(unsorted)/(sizeof(unsorted[0]));
    
    merge_iter_main(unsorted, size);

    printf("Nieposortowana tablica\n");
    for (int i = 0; i < size; i++)
        printf("%lf ", unsorted[i]);
    printf("\n");

    return 0;
}