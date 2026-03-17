#pragma once
#include "Punct.h"

class dreapta {
private:
	punct p1, p2;
public:
	dreapta(double p1x, double p1y, double p2x, double p2y);
	punct getP1()const;
	punct getP2()const;
	void setP1(punct p1);
	void setP1(double x, double y);
	void setP2(punct p2);
	void setP2(double x, double y);
	void printPct()const;

};