#include <stdio.h>
#define N 9
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

int quicksort_main(double *to_sort)
{
    double tablica[20] = {0};
    for (int i = 0; i < 20; i++)
        tablica[i] = to_sort[i];
    quicksort(tablica, 0, 20 - 1);

    printf("Quicksort\n");
    for (int i = 0; i < 20; i++)
        printf("%lf ", tablica[i]);
    printf("\n\n");
}