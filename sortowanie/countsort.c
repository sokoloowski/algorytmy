void countsort_main(int *to_sort)
{
    int tab[20] = {0};
    for (int i = 0; i < 20; i++)
    {
        tab[i] = to_sort[i];
    }
    int c[100], wynik[20];
    int k = 100, n = 20, i;
    for (i = 0; i < k; i++)
        c[i] = 0;
    for (i = 0; i < n; i++)
        c[tab[i]]++;
    for (i = 1; i < k; i++)
        c[i] += c[i - 1];
    for (i = 0; i < n; i++)
    {
        wynik[c[tab[i]] - 1] = tab[i];
        c[tab[i]]--;
    }

    printf("Countsort\n");
    for (int i = 0; i < 20; i++)
        printf("%d ", wynik[i]);
    printf("\n\n");
}