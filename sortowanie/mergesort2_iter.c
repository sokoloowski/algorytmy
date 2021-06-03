void mergesort2_iter_merge(double *Table, int start, int wsk, int stop)
{
    int i = start, j = wsk + 1, k = start;
    double b[20];
    for (int x = start; x <= stop; x++)
        b[x] = Table[x];
    while (i <= wsk && j <= stop)
    {
        if (b[i] < b[j])
        {
            Table[k++] = b[i++];
        }
        else
        {
            Table[k++] = b[j++];
        }
    }
    while (i <= wsk)
    {
        Table[k++] = b[i++];
    }
    while (j <= stop)
    {
        Table[k++] = b[j++];
    }
}

void mergesort2_iter(double *Table, int start, int stop)
{
    int przeskok = 2, poczatek, koniec;
    while (przeskok <= stop - start)
    {
        poczatek = start;
        koniec = stop;
        for (; poczatek <= stop; poczatek += przeskok)
        {
            koniec = poczatek + przeskok - 1;
            if (koniec > stop)
            {
                koniec = stop;
            }
            mergesort2_iter_merge(Table, poczatek, (poczatek + koniec) / 2, koniec);
        }
        przeskok += przeskok;
    }
}

void mergesort2_iter_main(double *to_sort)
{
    double tablica[20] = {0};
    for (int i = 0; i < 20; i++)
        tablica[i] = to_sort[i];
    mergesort2_iter(tablica, 0, 20 - 1);

    printf("Mergesort 2, iteracyjnie\n");
    for (int i = 0; i < 20; i++)
        printf("%.2f ", tablica[i]);
    printf("\n\n");
}

