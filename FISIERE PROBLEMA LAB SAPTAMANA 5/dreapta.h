#pragma once
#include "punct.h"
class Dreapta {
	private:
		Punct p1, p2;
	public:
		//constructor explict
		Dreapta(double p1x, double p1y, double p2x, double p2y);
		//getteri
		Punct getP1() const;
		Punct getP2() const;
		//setteri
		void setP1(Punct p1);
		void setP1(double x, double y);
		void setP2(Punct p2);
		void setP2(double x, double y);
		//alte functii
		void printPuncte() const;

};