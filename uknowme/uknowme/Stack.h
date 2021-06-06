//
// Created by Michał on 06.06.2021.
//

#ifndef UKNOWME_STACK_H
#define UKNOWME_STACK_H
#include <iostream>
using namespace std;


class Stack {

private:
    static void add(double* stack, double to_add, int& top);
    static double take(double* stack, int& top);

public:
    static void stack_main();
};



#endif //UKNOWME_STACK_H
