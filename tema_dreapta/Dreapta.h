#pragma once
#include "Punct.h"

class Dreapta
{
private:
	Punct p1,p2;

public:
	//Constructor explicit cu 4 parametri reali
	Dreapta(double x1, double y1, double x2, double y2);

	//Getteri
	Punct getP1();
	Punct getP2();

	//Setteri
	void setP1(Punct p1);
	void setP2(Punct p2);
	
	//functia membra de afisare
	void print();

	~Dreapta();
};