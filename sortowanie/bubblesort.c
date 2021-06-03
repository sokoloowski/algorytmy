/**
 * @file bubblesort.c
 * @author Piotr Sokołowski (piotrsokolowski00@outlook.com)
 * @brief Sortowanie bąbelkowe
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

void bubblesort_swap(double *a, double *b)
{
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(double *tab, int n)
{
    int zm = 1;
    while (zm)
    {
        zm = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            if (tab[i] > tab[i + 1])
            {
                bubblesort_swap(&tab[i], &tab[i + 1]);
                zm = 1;
            }
        }
    }
}

void bubblesort_main(double *to_sort) {
    double tablica[20] = {0};
    for (int i = 0; i < 20; i++) {
        tablica[i] = to_sort[i];
    }

    bubblesort(tablica, 20);

    printf("Bubblesort\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f ", tablica[i]);
    }
    printf("\n\n");    
}