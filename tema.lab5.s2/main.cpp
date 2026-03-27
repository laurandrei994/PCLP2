#include <iostream>
#include "Punct.h"
#include "Dreapta.h"

int main()
{
    Dreapta d(1.5, 2.5, 4.0, 5.0);

    std::cout << "\t--- Starea initiala ---" << std::endl;
    d.printDreapta();

    Punct pctNou1(10.0, 15.5);
    Punct pctNou2(20.0, 30.5);

    d.setP1(pctNou1);
    d.setP2(pctNou2);

    std::cout << "\t--- Starea dupa modificare ---" << std::endl;
    d.printDreapta();

    return 0;
}
