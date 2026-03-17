#include <iostream>
#include "dreapta.h"

Dreapta::Dreapta(double x1, double y1, double x2, double y2)
{
    p1.setX(x1);
    p1.setY(y1);

    p2.setX(x2);
    p2.setY(y2);
}

void Dreapta::setP1(Punct punct)
{
    p1 = punct;
}

void Dreapta::setP2(Punct punct)
{
    p2 = punct;
}

Punct Dreapta::getP1()
{
    return p1;
}

Punct Dreapta::getP2()
{
    return p2;
}

void Dreapta::afisare()
{
    std::cout << "P1(" << p1.getX() << ", " << p1.getY() << ") ";
    std::cout << "P2(" << p2.getX() << ", " << p2.getY() << ")\n";
}