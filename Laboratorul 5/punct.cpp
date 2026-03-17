#include "punct.h"

// constructor implicit
Punct::Punct()
{
    x = 0;
    y = 0;
}

// constructor explicit
Punct::Punct(double xVal, double yVal)
{
    x = xVal;
    y = yVal;
}

// setteri
void Punct::setX(double val)
{
    x = val;
}

void Punct::setY(double val)
{
    y = val;
}

// getteri
double Punct::getX()
{
    return x;
}

double Punct::getY()
{
    return y;
}