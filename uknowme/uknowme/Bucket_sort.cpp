
#include <iostream>
using namespace std;


class Bucket_sort {
    struct el_listy {
        el_listy* next;
        int v;
    };

    static void sort(const int* tab, const int n) {
        el_listy* first[100];
        el_listy* last[100];
        for (int i = 0; i < 100; i++) 
            first[i] = last[i] = 0;
        
        //podziel na kube³ki
        for (int i = 0; i < n; i++) {
            el_listy* nel = new el_listy();
            nel->v = tab[i];
            if (last[nel->v]) {
                last[nel->v]->next = nel;
                last[nel->v] = nel;
            }
            if (!first[nel->v]) {
                first[nel->v] = nel;
                last[nel->v] = nel;
            }
        }
        //pozbieraj to w ca³oœæ
        int m = 0;
        int* sortedTab = (int*) malloc(sizeof(int) * n);
        if(sortedTab)
        for (int i = 0; i < 100; i++) {
            el_listy* dys = first[i];
            while (dys) {
                sortedTab[m++] = dys->v;
                dys = dys->next;
            }
        }

        print(sortedTab, n);
    }
    
    static void print(int* tab, int n) {
        for (int i = 0; i < n; i++) {
            printf("%d ", tab[i]);
            
        }
    }

public:
    static void Bucket_sort_main() {
        cout << "Bucket sort: " << endl;
        int tab[] = { 24,12,56,33,56,75,12,11,16,18,56,23,45,75,63,74,23,68,46,20 };
        int n = sizeof(tab) / sizeof(tab[0]);
        sort(tab,n);
        cout << endl << "End of Bucket sort" << endl;
    }
};
