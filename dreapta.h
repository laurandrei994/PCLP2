#pragma once
#include "punct.h";

class Dreapta {
private:
	Punct p1;
	Punct p2;
public:
	Punct getP1() const;
	Punct getP2() const;

	void setP1(float x, float y);

	void setP2(float x, float y);

	Dreapta(float p1x, float p1y, float p2x, float p2y);

	void printDreapta();

};