/**
 * @file heapsort.c
 * @author Piotr Sokołowski (piotrsokolowski00@outlook.com)
 * @brief 13.04.2021
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

int heapsort_heap_size = 11;

int heapsort_parent(int i)
{
    return i / 2;
}

int heapsort_left(int i)
{
    return 2 * i;
}

int heapsort_right(int i)
{
    return 2 * i + 1;
}

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

void heapsort_build_heap(double tab[])
{
    for (int i = heapsort_heap_size / 2; i >= 0; i--)
    {
        heapsort_heapify(tab, i);
    }
}

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
        printf("%lf ", tab[i]);
    }
    printf("\n\n");
}