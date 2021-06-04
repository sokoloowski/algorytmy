//
// Created by Michał on 04.06.2021.
//

#include "Bucket_sort_advanced.h"


void Bucket_sort_advanced::print(Bucket_sort_advanced::el_listy *tab2, int w, int n) {
    for (int i = 0; i < n; ++i) {
        cout << tab2[w].value << ",";
        w = tab2[w].next;
    }
}

int Bucket_sort_advanced::sort(const int *tab, int n, int liczba_kubelkow, struct el_listy *element){
    int poczatek_1[liczba_kubelkow+1];
    int koniec_1[liczba_kubelkow+1];
    struct el_listy *ws=element;
    int ws0, ws2;

    for(int i=0;i<liczba_kubelkow+1;i++){
        poczatek_1[i]=-1;
        koniec_1[i]=-1;
    }

    for(int i =0;i<n;i++) {
        ws->value = tab[i];
        ws->next = -1;

        if (poczatek_1[ws->value] == -1) {
            poczatek_1[ws->value] = i;
            koniec_1[ws->value] = i;
        }

        else {
            element[koniec_1[ws->value]].next = i;
            koniec_1[ws->value] = i;
        }
        ws++;
    }

    int i=0;
    for(i =0;poczatek_1[i]==-1;i++);
    ws0 = poczatek_1[i];
    ws2 = koniec_1[i];
    for(i++;i<=liczba_kubelkow;i++){
        if(poczatek_1[i]!=-1){
            element[ws2].next=poczatek_1[i];
            ws2 = koniec_1[i];
        }
    }

    return ws0;
}

void Bucket_sort_advanced::bucket_sort_main() {
    int tab[] = { 24,12,56,33,56,75,12,11,16,18,56,23,45,75,63,74,23,68,46,20 };
    int n = sizeof(tab) / sizeof(tab[0]);
    int liczba_kubelkow = *max_element(tab , tab + n);
    struct el_listy tab2[n];
    int w;

    cout << endl << "Advanced bucket sort: " << endl;

    w = sort(tab, n, liczba_kubelkow, tab2);
    print(tab2, w, n);

    cout << endl << "End of advanced bucket sort" << endl;
}
