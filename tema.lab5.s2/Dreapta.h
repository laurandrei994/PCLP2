#pragma once
#include "Punct.h"

class Dreapta
{
private:
    Punct p1;
    Punct p2;

public:
    // Constructor explicit cu 4 parametri
    Dreapta(double x1, double y1, double x2, double y2);

    // Destructor
    ~Dreapta();

    // Getteri
    Punct getP1() const;
    Punct getP2() const;

    // Setteri
    void setP1(Punct p);
    void setP2(Punct p);

    // Alte functii
    void printDreapta() const;
};
