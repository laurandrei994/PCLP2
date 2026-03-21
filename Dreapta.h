#ifndef DREAPTA_H
#define DREAPTA_H

#include "Punct.h"

class Dreapta {
private:
    Punct p1;
    Punct p2;

public:
    Dreapta(int, int, int, int);

    void setP1(int, int);
    void setP2(int, int);

    Punct getP1();
    Punct getP2();

    void print();
};

#endif