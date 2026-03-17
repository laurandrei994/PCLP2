#pragma once
#include "punct.h"

class Dreapta
{
private:
	Punct p1;
	Punct p2;

public:
	//constructor explicit
	Dreapta(double x1, double y1, double x2, double y2);

	//setteri
	void setP1(Punct punct);
	void setP2(Punct punct);

	//getteri
	Punct getP1();
	Punct getP2();

	//functia membra de afisare
	void afisare();
};
