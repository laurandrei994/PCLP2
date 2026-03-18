#pragma once

class Punct
{
private:
    double x;
    double y;

public:
    // Constructor cu valori implicite (implicit + explicit)
    Punct(double x = 0, double y = 0);

    // Getteri
    double getX() const;
    double getY() const;

    // Setteri
    void setX(double x);
    void setY(double y);

    // Destructor
    ~Punct();

    // Alte functii
    void printPunct();
};