#pragma once

class Punct
{
private:
    double x;
    double y;

public:
    // Constructori
    Punct();                               // Constructor implicit
    Punct(double x, double y);             // Constructor explicit
    
    // Destructor
    ~Punct();

    // Getteri
    double getX() const;
    double getY() const;

    // Setteri
    void setX(double x);
    void setY(double y);

    // Alte functii
    void printPunct() const;
};
