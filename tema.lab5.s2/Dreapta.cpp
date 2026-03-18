#include "Dreapta.h"
#include <iostream>

Dreapta::Dreapta(double x1, double y1, double x2, double y2)
    : p1(x1, y1), p2(x2, y2)
{
    std::cout << "Apel al constructorului pentru dreapta" << std::endl;
}

Dreapta::~Dreapta()
{
    std::cout << "Apel al destructorului pentru Dreapta" << std::endl;
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

void Dreapta::setP2(Punct p)
{
    this->p2 = p;
}

void Dreapta::printDreapta() const
{
    std::cout << "Dreapta uneste punctele: P1";
    this->p1.printPunct(); 
    std::cout << " si P2";
    this->p2.printPunct();
    std::cout << std::endl;
}