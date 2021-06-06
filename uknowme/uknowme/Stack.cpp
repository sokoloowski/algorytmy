//
// Created by Michał on 06.06.2021.
//

#include "Stack.h"

void Stack::add(double* stack, double to_add, int& top) {
    stack[top] = to_add;
    top++;
}

double Stack::take(double* stack, int& top) {
    top--;
    return stack[top];
}

void Stack::stack_main() {
    double stos[10];
    int szczyt=0;

    cout << endl << "Stack: " << endl;

    add(stos, 4, szczyt);
    add(stos, 10, szczyt);
    add(stos, 5.2, szczyt);
    printf("%lf\n",take(stos, szczyt));
    add(stos, 7, szczyt);
    printf("%lf\n",take(stos, szczyt));
    printf("%lf\n",take(stos, szczyt));
    printf("%lf",take(stos, szczyt));

    cout << endl << "End of stack" << endl;
}
