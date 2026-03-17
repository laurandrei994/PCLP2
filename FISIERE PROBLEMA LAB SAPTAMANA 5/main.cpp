#include <iostream>
#include "punct.h"
#include "dreapta.h"

int main()
{
	Dreapta d(1.2, 2.3, 3.4, 4.5);
	d.printPuncte();
	d.setP1(5.6, 6.7);
	d.setP2(7.8, 8.9);
	d.printPuncte();
}
