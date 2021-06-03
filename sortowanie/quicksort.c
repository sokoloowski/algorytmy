/**
 * @file quicksort.c
 * @author Piotr Sokołowski (piotrsokolowski00@outlook.com)
 * @brief Sortowanie szybkie
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief Dzielenie tablicy na mniejsze (dziel i zwyciężaj)
 * 
 * @param Tab tablica do podzielenia
 * @param p początek
 * @param r koniec
 * @return środek tablicy Tab
 */
int quicksort_partition(double *Tab, int p, int r)
{
    int i = p - 1, j = r + 1;
    double x = Tab[p];
    while (1)
    {
        j--;
        while (Tab[j] > x)
            j--;
        i++;
        while (Tab[i] < x)
            i++;
        if (i < j)
        {
            int pom = Tab[i];
            Tab[i] = Tab[j];
            Tab[j] = pom;
        }
        else
            return j;
    }
}

/**
 * @brief Quicksort
 * 
 * @param Tab tablica do posortowania
 * @param p początek przedziału
 * @param r koniec przedziału
 */
void quicksort(double *Tab, int p, int r)
{
    int q;
    if (p < r)
    {
        q = quicksort_partition(Tab, p, r);
        quicksort(Tab, p, q);
        quicksort(Tab, q + 1, r);
    }
}

/**
 * @brief Funkcja główna sortowania szybkiego.
 * Po zakończeniu działania algorytmu wypisywana jest posortowana tablica
 * 
 * @param to_sort Tablica do posortowania
 */
int quicksort_main(double *to_sort)
{
    double tablica[20] = {0};
    for (int i = 0; i < 20; i++)
        tablica[i] = to_sort[i];
    quicksort(tablica, 0, 20 - 1);

    printf("Quicksort\n");
    for (int i = 0; i < 20; i++)
        printf("%.2f ", tablica[i]);
    printf("\n\n");
}