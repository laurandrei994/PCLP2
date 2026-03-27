#include <iostream>
#include "Complex.h"

using namespace std;

Complex operator-(Complex c1, Complex c2)
{
    Complex rezultat;
    rezultat.setReal(c1.getReal() - c2.getReal());
    rezultat.setImaginar(c1.getImaginar() - c2.getImaginar());
    return rezultat;
}

int main()
{
    Complex c;

    cout << "Introduceti un numar complex";
    cin >> c;

	cout << "Partea reala: "  << c.getReal() << endl;
	cout << "Partea imaginara: "  << c.getImaginar() << endl;

	Complex rezultat;
	rezultat = c+c;
    cout << endl << "Suma: c+c: ";
    cout << "Partea reala: "  << rezultat.getReal() << endl;
	cout << "Partea imaginara: "  << rezultat.getImaginar() << endl;

    cout << endl << "Suma: c+c: ";
	rezultat = c+5;
    cout << "Partea reala: "  << rezultat.getReal() << endl;
	cout << "Partea imaginara: "  << rezultat.getImaginar() << endl;

    cout << endl << "Diferenta: c - c: ";
	rezultat = c - c;
    cout << "Partea reala: "  << rezultat.getReal() << endl;
	cout << "Partea imaginara: "  << rezultat.getImaginar() << endl;

	return 0;
}
