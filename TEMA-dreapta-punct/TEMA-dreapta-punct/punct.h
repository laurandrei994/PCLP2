#pragma once

class Punct
{
	private:
		double x;
		double y;

	public:
		//constructor
		Punct(){
			this->x = 0;
			this->y = 0;
		}

		//constructor explicit
		Punct(double x, double y) {
			this->x = x;
			this->y = y;
		}

		//getteri
		double getX();
		double getY();

		//setteri
		void setX(double x);
		void setY(double y);

		//alte functii
		void printPunct();
};
