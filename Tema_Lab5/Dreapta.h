#pragma once
#include "Punct.h"

class Dreapta {
private:
	Punct p1;
	Punct p2;

public:
	// Constructorul cu 4 parametri reali conform cerintei
	Dreapta(double x1, double y1, double x2, double y2);

	Punct getP1() const;
	Punct getP2() const;

	void setP1(Punct p1);
	void setP2(Punct p2);

	~Dreapta();

	void afisare() const;
};