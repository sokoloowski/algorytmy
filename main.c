/**
 * @file main.c
 * @author Piotr Sokołowski (piotrsokolowski00@outlook.com)
 * @brief Główny plik wywołujący poszczególne algorytmy
 * @version 0.1
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include "sortowanie/mergesort_iter.c"
#include "sortowanie/mergesort2_iter.c"
#include "sortowanie/mergesort_rec.c"
#include "sortowanie/mergesort2_rec.c"
#include "sortowanie/quicksort.c"
#include "sortowanie/countsort.c"

int main(void) {
    double to_sort[] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    int to_sort_int[] = {1, 5, 4, 7, 12, 17, 11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, 20, 10, 15};
    
    mergesort_iter_main(to_sort);
    mergesort2_iter_main(to_sort);
    mergesort_rec_main(to_sort);
    mergesort2_rec_main(to_sort);
    quicksort_main(to_sort);
    countsort_main(to_sort_int);


    printf("Nieposortowana tablica\n");
    for (int i = 0; i < 20; i++)
        printf("%lf ", to_sort[i]);
    printf("\n");

    return 0;
}