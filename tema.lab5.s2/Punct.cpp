#include "Punct.h"
#include <iostream>

Punct::Punct()
{
    this->x = 0.0;
    this->y = 0.0;
}

Punct::Punct(double x, double y)
{
    this->x = x;
    this->y = y;
    std::cout << "Apel al constructorului pentru punct" << std::endl;
}

Punct::~Punct()
{
    std::cout << "Apel al destructorului pentru Punct" << std::endl;
}

double Punct::getX() const
{
    return this->x;
}

double Punct::getY() const
{
    return this->y;
}

void Punct::setX(double x)
{
    this->x = x;
}

void Punct::setY(double y)
{
    this->y = y;
}

void Punct::printPunct() const
{
    std::cout << "(" << this->x << ", " << this->y << ")";
}