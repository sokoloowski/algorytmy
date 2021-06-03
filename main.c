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

int main(void) {
    double unsorted[] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    
    mergesort_iter_main(unsorted);
    mergesort2_iter_main(unsorted);
    mergesort_rec_main(unsorted);
    mergesort2_rec_main(unsorted);
    quicksort_main(unsorted);


    printf("Nieposortowana tablica\n");
    for (int i = 0; i < 20; i++)
        printf("%lf ", unsorted[i]);
    printf("\n");

    return 0;
}