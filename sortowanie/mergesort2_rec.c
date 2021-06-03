void mergesort2_rec_merge(double *Table, int start, int wsk, int stop)
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

void mergesort2_rec(double *Table, int start, int stop)
{
    if (start < stop)
    {
        int wsk = (start + stop) / 2;
        mergesort2_rec(Table, start, wsk);
        mergesort2_rec(Table, wsk + 1, stop);
        mergesort2_rec_merge(Table, start, wsk, stop);
    }
}

void mergesort2_rec_main(double *to_sort)
{
    double tablica[20] = {0};
    for (int i = 0; i < 20; i++)
        tablica[i] = to_sort[i];
    mergesort2_rec(tablica, 0, 20 - 1);

    printf("Mergesort 2, rekurencyjnie\n");
    for (int i = 0; i < 20; i++)
        printf("%.2f ", tablica[i]);
    printf("\n\n");
}