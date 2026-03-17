#pragma once
#include "punct.h"

class Dreapta
{
	private:
		Punct p1;
		Punct p2;
	public:
		//constructor
		Dreapta(double x1, double y1, double x2, double y2);

		//getteri
		Punct getP1();
		Punct getP2();

		//setteri
		void setP1(int x1, int y1);
		void setP2(int x1, int y1);

		//alte functii
		void printDreapta();

};