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

#include "sortowanie/mergesort_iter.c"

int main(void) {
    double unsorted[] = {1, 5, 4.36, 7, 12, 17, -11, 8, 0, 86, 12, 1, 17, 2, 21, 56, 53, -20, 10, 15};
    
    mergesort_iter_main(unsorted);

    printf("Nieposortowana tablica\n");
    for (int i = 0; i < 20; i++)
        printf("%lf ", unsorted[i]);
    printf("\n");

    return 0;
}