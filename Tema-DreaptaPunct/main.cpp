#include "Dreapta.h"
#include <iostream>

int main()
{
    //  Declarare obiect
    Dreapta d(1, 2, 3, 4);

    //  Afisare
    d.printDreapta();

    //  Modificare puncte
    d.setP1(5, 6);
    d.setP2(7, 8);

    //  Afisare din nou
    d.printDreapta();

    return 0;
}