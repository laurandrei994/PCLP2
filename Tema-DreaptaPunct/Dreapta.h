#pragma once
#include "Punct.h"

class Dreapta
{
private:
    Punct p1;
    Punct p2;

public:
    // Constructor explicit 
    Dreapta(double x1, double y1, double x2, double y2);

    // Getteri
    Punct getP1() const;
    Punct getP2() const;

    // Setteri
    void setP1(Punct p);
    void setP1(double x, double y);

    void setP2(Punct p);
    void setP2(double x, double y);

    // Destructor
    ~Dreapta();

    // Alte functii
    void printDreapta();
};