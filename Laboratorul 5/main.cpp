#include <iostream>
#include "dreapta.h"
#include "punct.h"

int main()
{
    Dreapta d(1, 2, 3, 4);

    std::cout << "Dreapta initiala:\n";
    d.afisare();

    Punct punctNou1(10, 20);
    Punct punctNou2(30, 40);

    d.setP1(punctNou1);
    d.setP2(punctNou2);

    std::cout << "\nDreapta dupa modificare:\n";
    d.afisare();

    return 0;
}