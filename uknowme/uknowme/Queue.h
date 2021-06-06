//
// Created by Michał on 06.06.2021.
//

#ifndef UKNOWME_QUEUE_H
#define UKNOWME_QUEUE_H
#include <iostream>
using namespace std;

class Queue {

private:
    static double queue[100];
    static int start,
        koniec,
        l_elem,
        dlugosc;

    static void insert(double to_insert);
    static double get();

public:

    static void queue_main();
};


#endif //UKNOWME_QUEUE_H
