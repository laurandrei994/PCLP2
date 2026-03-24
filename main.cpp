#include <iostream>
#include "Complex.h"
using namespace std;

Complex operator-(Complex c1, Complex c2);

int main()
{
	Complex c1;
	Complex c2;
	cout << "introduceti un numar complex c1: " << endl;
	cin >> c1;
	cout << "introduceti un numar complex c2: " << endl;
	cin >> c2;
	/*cout << "partea reala: " << c.getReal() << endl;
	cout << "partea imaginara: " << c.getImaginar() << endl;
	Complex rezultat = c + 4;
	cout << "\nrezultatul adunarii c+c: " << endl 
		<< "partea reala:"<< rezultat.getReal()<< endl 
		<< "partea imaginara: "<< rezultat.getImaginar() << endl;
	rezultat = c - c;
	cout << "\nrezultatul scaderii c-c: " << endl 
		<< "partea reala:" << rezultat.getReal() << endl 
		<< "partea imaginara: " << rezultat.getImaginar() << endl;*/

	cout << "numarul real c1:" << c1 << endl;
	cout << "numarul real c2:" << c2 << endl;
	Complex rezultat;
	rezultat = c1 + c2;
	cout << "rezultatul adunarii c1+c2: " << endl << rezultat << endl;
	rezultat = c1 - c2;
	cout << "rezultatul scaderii c1-c2: " << endl << rezultat << endl;
	rezultat = c1 * c2;
	cout << "rezultatul inmultirii c1*c2: " << endl << rezultat << endl;
	rezultat = !c1;
	cout << "rezultatul conjugatului lui c1: " << endl << rezultat << endl;
	rezultat = !c2;
	cout << "rezultatul conjugatului lui c2: " << endl << rezultat << endl;
	return 0;
}


Complex operator-(Complex c1, Complex c2)
{
	Complex rezultat;
	rezultat.setReal(c1.getReal() - c2.getReal());
	rezultat.setImaginar(c1.getImaginar() - c2.getImaginar());
	return rezultat;
}