#include <iostream>
#include "Complex.h"


int main()
{
	Complex c(5, 5);
	std::cout << "Partea reala a numarului complex este " << c.getReal() << " iar partea imaginara este " << c.getImaginar() << std::endl;
	
	Complex rezultat;

	rezultat = c + c;
	std::cout << "Partea reala a numarului complex este " << rezultat.getReal() << std::endl;
	std::cout << "Partea reala a complexa complex este " << rezultat.getImaginar() << std::endl;

	return 0;
}

#include "dreapta.h"
#include "punct.h"

using namespace std;

int main()
{
    Dreapta d(2,1,0,3);
	d.printDreapta();
	d.setP1(12.3, 11.4);
	d.setP2(14.3, 11.7);
	d.printDreapta();

    return 0;
}
//f25e472 (Adaugarea clasei si header ului pt dreapta si modif in main)
