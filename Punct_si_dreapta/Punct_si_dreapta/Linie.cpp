#include "Linie.h"
#include "Punct.h"
#include <iostream>


Punct Linie::getP1()
{
    return this->p1;
}

Punct Linie::getP2()
{
    return this->p2;
}

void Linie::setP1(int x, int y)
{
    this->p1 = Punct(x, y);
}

void Linie::setP2(int x, int y)
{
    this->p2 = Punct(x, y);
}

Linie::Linie(int x1, int y1, int x2, int y2)
{
    this->p1 = Punct(x1, y1);
    this->p2 = Punct(x2, y2);
}


void Linie::printPunct()
{
        std::cout << "Dreapta cu primul punct in P1";
        this->p1.print();
        std::cout << " si al doilea punct in P2";
        this->p2.print();
        std::cout << std::endl;
}

