/**
 * @file merge_rec.c
 * @author Michał Pałucki
 * @brief Sortowanie przez scalanie - wersja rekurencyjna
 * @version 0.1
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

void mergesort_rec_merge(double *table, int leftSide, int center, int rightSide)
{
    double pom[20];
    for (int i = leftSide; i <= rightSide; ++i)
    {
        pom[i] = table[i];
    }
    int i = leftSide;
    int j = center + 1;
    int k = leftSide;
    while (i <= center && j <= rightSide)
    {
        if (pom[i] < pom[j])
        {
            table[k++] = pom[i++];
        }
        else
        {
            table[k++] = pom[j++];
        }
    }

    while (i <= center)
    {
        table[k++] = pom[i++];
    }

    while (j <= rightSide)
    {
        table[k++] = pom[j++];
    }
}

void mergesort_rec(double *table, int x1, int x2)
{
    if (x1 < x2)
    {
        int x3 = (x2 + x1) / 2;
        mergesort_rec(table, x1, x3);
        mergesort_rec(table, x3 + 1, x2);
        mergesort_rec_merge(table, x1, x3, x2);
    }
}

/**
 * @brief Funkcja główna sortowania przez scalanie w wersji iteracyjnej.
 * Po zakończeniu działania algorytmu wypisywana jest posortowana tablica
 * 
 * @param to_sort Tablica do posortowania
 */
void mergesort_rec_main(double *to_sort)
{
    double tablica[20] = {0};
    double tablica_pomocnicza[20] = {0};
    for (int i = 0; i < 20; i++)
        tablica[i] = to_sort[i];
    mergesort_rec(tablica, 0, 20 - 1);

    printf("Mergesort, rekurencyjnie\n");
    for (int i = 0; i < 20; i++)
        printf("%.2f ", tablica[i]);
    printf("\n\n");
}