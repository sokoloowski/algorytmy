//
// Created by Michał on 06.06.2021.
//

#include "Queue.h"


double Queue::queue[100] = {0};
int Queue::start = 0,
        Queue::koniec = 0,
        Queue::l_elem = 0,
        Queue::dlugosc = 100;


void Queue::insert(double to_insert) {
    if (l_elem < dlugosc){
        queue[koniec++] = to_insert;
        l_elem++;
        if (koniec == dlugosc){
            koniec = 0;
        }
    }
    printf("[INS] Start: %d, End: %d, Size: %d, Item: %.2f\n", start, koniec, l_elem, to_insert);
}

double Queue::get() {
    if (l_elem > 0){
        l_elem--;
        double ret = queue[start++];
        if (start == dlugosc){
            start = 0;
        }
        printf("[GET] Start: %d, End: %d, Size: %d", start, koniec, l_elem);
        return ret;
    }
    return 666;
}

void Queue::queue_main() {
    cout << endl << "FIFO start: " << endl;

    insert(2.02);
    insert(4.32);
    insert(1.2);
    for (int i = start; i != koniec; i++){
        printf(", Item: %.2f\n", get());
    }
    insert(43.23);
    insert(6.45);
    insert(2342.347);
    for (int i = start; i != koniec; i++){
        printf(", Item: %.2f\n", get());
    }

    cout << endl << "FIFO koniec" << endl;
}
