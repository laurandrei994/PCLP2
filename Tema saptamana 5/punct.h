#pragma once
#include <iostream>
using namespace std;

class Punct
{
private:
	float x;
	float y;

public:
	//constructor implicit
	Punct();
	//constructor explicit
	Punct(float x, float y);
	//getteri
	float getx() const;
	float gety()const;
	//setteri
	void setx(float x);
	void sety(float y);
};	

