#include <iostream>
#include "Dreapta.h"
#include "Punct.h"

int main()
{
	Dreapta d(1.5, 2, 3, 4.5);

	d.print();

	Punct newP1(5, 6);
	d.setP1(newP1);
	Punct newP2(8, 9);
	d.setP2(newP2);

	d.print();

	return 0;
}