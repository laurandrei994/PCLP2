#pragma once
#include "Punct.h"
class Linie {

private:
	Punct p1;
	Punct p2;
public:
	//Getteri
	Punct getP1();
	Punct getP2();
	//Setteri
	void setP1(int x, int y);
	void setP2(int x, int y);
	//Constructor explicit
	Linie(int x1, int y1, int x2, int y2);
	//Alte functii
	void printPunct();

};
