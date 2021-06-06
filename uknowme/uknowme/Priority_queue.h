//
// Created by Michał on 06.06.2021.
//

#ifndef UKNOWME_PRIORITY_QUEUE_H
#define UKNOWME_PRIORITY_QUEUE_H
#include <iostream>
using namespace std;


class Priority_queue {

private:
    static int heap_size;

    static int parent(int i);
    static void heapify(double *arr, int n, int i);
    static double najw_liczba(double *arr);
    static double najw_liczba_usun(double *arr);
    static void dodaj_liczbe(double *arr, int i, double to_insert);
    static void wstaw(double *arr, double to_insert);

public:

    static void priority_queue_main();
};


#endif //UKNOWME_PRIORITY_QUEUE_H
