#include "Dreapta.h"
#include "Punct.h"
#include <iostream>

int main()
{

    Dreapta dreapta(1.0, 2.0, 3.0, 4.0);


    dreapta.afisareCoordonate();


    Punct p1(5.0, 6.0);
    Punct p2(7.0, 8.0);
    dreapta.setP1(p1);
    dreapta.setP2(p2);


    dreapta.afisareCoordonate();


    return 0;
}