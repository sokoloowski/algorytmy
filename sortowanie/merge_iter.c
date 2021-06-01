#include <stdio.h>

double *merge_iter(double *wejscie, double *wyjscie, int n)
{
    int dlugosc_podciagu, poczatek_podciagu, i, j, ograniczenie_i, ograniczenie_j, k;
    double *pomoc;

    for (dlugosc_podciagu = 1; dlugosc_podciagu < n; dlugosc_podciagu *= 2)
    {
        for (poczatek_podciagu = 0, k = 0; k < n; poczatek_podciagu += 2 * dlugosc_podciagu)
        {
            i = poczatek_podciagu;
            j = poczatek_podciagu + dlugosc_podciagu;
            ograniczenie_i = poczatek_podciagu + dlugosc_podciagu;
            ograniczenie_j = poczatek_podciagu + 2 * dlugosc_podciagu;
            if (ograniczenie_i > n)
                ograniczenie_i = n;
            if (ograniczenie_j > n)
                ograniczenie_j = n;

            while (i < ograniczenie_i && j < ograniczenie_j)
            {
                if (wejscie[i] >= wejscie[j])
                    wyjscie[k++] = wejscie[j++];
                else
                    wyjscie[k++] = wejscie[i++];
            }

            while (i < ograniczenie_i)
            {
                wyjscie[k++] = wejscie[i++];
            }

            while (j < ograniczenie_j)
            {
                wyjscie[k++] = wejscie[j++];
            }
        }
        pomoc = wejscie;
        wejscie = wyjscie;
        wyjscie = pomoc;
    }

    return wejscie;
}