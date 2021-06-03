/**
 * @file bucketsort.c
 * @author Piotr Sokołowski (piotrsokolowski00@outlook.com)
 * @brief Sortowanie kubełkowe
 * @version 0.1
 * @date 2021-06-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

struct bucketsort_el_listy {
    struct bucketsort_el_listy *nast;
    int wart;
};

struct bucketsort_el_listy *bucketsort (int *tab, int n) {
    struct bucketsort_el_listy *poczatek[100];
    for (int i = 0; i < 100; i++)
    {
        poczatek[i] = 0;
    }

    struct bucketsort_el_listy *w;

    for (int i = 0; i < 20; i++)
    {
        w = malloc(sizeof(struct bucketsort_el_listy));
        w->wart = tab[i];
        w->nast = 0;

        if (poczatek[tab[i]] == 0) {
            poczatek[tab[i]] = w;
        } else {
            w->nast = poczatek[tab[i]];
            poczatek[tab[i]] = w;
        }
    }
    
    int i = 0;
    struct bucketsort_el_listy *ws0;
    for (; poczatek[i] == 0; i++);

    ws0 = poczatek[i];
    w = ws0;
    i++;

    for (; i < 100; i++)
    {
        if (poczatek[i] != 0)
        {
            while (w->nast != 0)
            {
                w = w->nast;
            }
            w->nast = poczatek[i];
        }
    }

    return ws0;
}

void bucketsort_main(int *to_sort) {
    int tablica[20] = {0};
    for (int i = 0; i < 20; i++)
    {
        tablica[i] = to_sort[i];
    }

    struct bucketsort_el_listy *w, *ws0;

    ws0 = bucketsort(tablica, 20);
    
    printf("Bucketsort\n");
    for (w = ws0; w != 0; w = w->nast)
    {
        printf("%d ", w->wart);
    }
    printf("\n\n");
}