#pragma once
#include<iostream>
#include "punct.h"
using namespace std;

class Dreapta
{
private:
	Punct p1;
	Punct p2;
public:
	//constrctor explicit
	Dreapta(float p1x, float p1y, float p2x, float p2y);
	//getteri
	Punct getp1() const;
	Punct getp2() const;
	//setteri
	void setp1(Punct p1);
	void setp1(float x, float y);
	void setp2(Punct p2);
	void setp2(float x, float y);
	//alte functii
	void printPuncte();
};