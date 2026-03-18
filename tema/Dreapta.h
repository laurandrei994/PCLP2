#include "Punct.h"

class Dreapta
{
private:
    Punct p1;
    Punct p2;
public:
    Punct getP1();
    Punct getP2();

    void setP1(Punct p1);
    void setP2(Punct p2);

    Dreapta();
    Dreapta(float x1, float y1, float x2, float y2);

    ~Dreapta();

    void afisareCoordonate();
};