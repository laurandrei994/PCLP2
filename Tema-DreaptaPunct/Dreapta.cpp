#include "Dreapta.h"
#include <iostream>

Dreapta::Dreapta(double x1, double y1, double x2, double y2)
    : p1(x1, y1), p2(x2, y2)
{
}

Punct Dreapta::getP1() const
{
    return this->p1;
}

Punct Dreapta::getP2() const
{
    return this->p2;
}

void Dreapta::setP1(Punct p)
{
    this->p1 = p;
}

void Dreapta::setP1(double x, double y)
{
    Punct p(x, y);
    this->p1 = p;
}

void Dreapta::setP2(Punct p)
{
    this->p2 = p;
}

void Dreapta::setP2(double x, double y)
{
    Punct p(x, y);
    this->p2 = p;
}

Dreapta::~Dreapta()
{
    std::cout << "Destructor Dreapta\n";
}

void Dreapta::printDreapta()
{
    std::cout << "Dreapta formata din punctele: ";
    p1.printPunct();
    std::cout << " si ";
    p2.printPunct();
    std::cout << std::endl;
}