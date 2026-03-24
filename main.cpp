#include <iostream>
#include "Complex.h"

using namespace std;

complex rezultat;

complex operator-(complex c1, complex c2);


int main()
{

	complex c(7, 2);
	cout << "partea reala este: " << c.getReal() << endl;
	cout << "partea imaginara este: " << c.getImg() << endl;
	rezultat = c + c;
	rezultat = c - c;

	cout << rezultat.getReal() << " + " << rezultat.getImg() << "i" << endl;
	cin >> c;
	cout << "Laborator 6" << std::endl;


	return 0;
}

complex operator-(complex c1, complex c2)
{
	complex rezultat;
	rezultat.setReal(c1.getReal() - c2.getReal());
	rezultat.setImg(c1.getImg() - c2.getImg());
	return rezultat;
}
