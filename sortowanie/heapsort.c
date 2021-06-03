/**
 * @file heapsort.c
 * @author Piotr Sokołowski (piotrsokolowski00@outlook.com)
 * @brief Sortowanie przez kopcowanie (sortowanie stogowe)
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

int heapsort_heap_size = 11;

/**
 * @brief Lewa część kopca
 * 
 * @param i początek kopca
 * @return ostatni element lewej części kopca
 */
int heapsort_left(int i)
{
    return 2 * i;
}

/**
 * @brief Prawa część kopca
 * 
 * @param i początek kopca
 * @return pierwszy element prawej części kopca
 */
int heapsort_right(int i)
{
    return 2 * i + 1;
}

/**
 * @brief Kopcowanie
 * 
 * @param tab tablica do posortowania
 * @param i początek tablicy
 */
void heapsort_heapify(double tab[], int i)
{
    int l = heapsort_left(i), r = heapsort_right(i), max_index;
    double temp;

    if (l <= heapsort_heap_size && tab[l] > tab[i])
    {
        max_index = l;
    }
    else
    {
        max_index = i;
    }

    if (r <= heapsort_heap_size && tab[r] > tab[max_index])
    {
        max_index = r;
    }

    if (max_index != i)
    {
        temp = tab[i];
        tab[i] = tab[max_index];
        tab[max_index] = temp;
        heapsort_heapify(tab, max_index);
    }
}

/**
 * @brief Budowanie kopca
 * 
 * @param tab tablica do posortowania
 */
void heapsort_build_heap(double tab[])
{
    for (int i = heapsort_heap_size / 2; i >= 0; i--)
    {
        heapsort_heapify(tab, i);
    }
}

/**
 * @brief Główna funkcja sortująca
 * 
 * @param tab tablica do posortowania
 * @param n rozmiar tablicy tab
 */
void heapsort(double tab[], int n)
{
    double temp;
    heapsort_heap_size = n;
    heapsort_build_heap(tab);

    for (int i = heapsort_heap_size; i >= 1; i--)
    {
        temp = tab[0];
        tab[0] = tab[i];
        tab[i] = temp;
        heapsort_heap_size--;
        heapsort_heapify(tab, 0);
    }
}

/**
 * @brief Sortowanie przez kopcowanie - główna funkcja programu
 * 
 * @param to_sort tablica do posortowania
 */
void heapsort_main(double *to_sort)
{
    double tab[20] = {0};
    for (int i = 0; i < 20; i++) {
        tab[i] = to_sort[i];
    }

    heapsort(tab, 20-1);

    printf("Heapsort\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f ", tab[i]);
    }
    printf("\n\n");
}