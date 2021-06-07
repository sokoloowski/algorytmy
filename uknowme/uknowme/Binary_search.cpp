//
// Created by Michał on 07.06.2021.
//

#include "Binary_search.h"


int Binary_search::search(double *tab, int element, int num_of_el) {
    int low = 0, high = num_of_el - 1, mid;

    while(low < high){
        mid = (low + high) / 2;
        if(element <= tab[mid]){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }
    return high;
}

void Binary_search::binary_search_main() {
    double tab[5] = {1,4,8,10,21};
    int index;

    cout << endl << "Binary search start: " << endl;

    index = search(tab,10,5);
    printf("index is: %d",index);

    cout << endl << "Binary search end" << endl;
}
