#include <iostream>
#include "Complex.h"
using namespace std;

Complex operator-(Complex c1, Complex c2);

int main()
{
	Complex c(5,5);
	cout << "introduceti un numar complex: " << endl;
	cin >> c;
	cout << "partea reala: " << c.getReal() << endl;
	cout << "partea imaginara: " << c.getImaginar() << endl;
	Complex rezultat = c + 4;
	cout << "\nrezultatul adunarii c+c: " << endl 
		<< "partea reala:"<< rezultat.getReal()<< endl 
		<< "partea imaginara: "<< rezultat.getImaginar() << endl;
	rezultat = c - c;
	cout << "\nrezultatul scaderii c-c: " << endl 
		<< "partea reala:" << rezultat.getReal() << endl 
		<< "partea imaginara: " << rezultat.getImaginar() << endl;

	return 0;
}


Complex operator-(Complex c1, Complex c2)
{
	Complex rezultat;
	rezultat.setReal(c1.getReal() - c2.getReal());
	rezultat.setImaginar(c1.getImaginar() - c2.getImaginar());
	return rezultat;
}