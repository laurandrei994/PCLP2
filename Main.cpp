#include <iostream>
#include "Dreapta.h"

int main() {
    Dreapta d(1, 2, 3, 4);

    d.print();

    d.setP1(10, 20);
    d.setP2(30, 40);

    d.print();

    return 0;
}