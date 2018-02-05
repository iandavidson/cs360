#ifndef EQUILATERAL_H
#define EQUILATERAL_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Equilateral
{
public:
	Equilateral();
	Equilateral(float s);
	Equilateral(const Equilateral & e);
	~Equilateral();

	Equilateral & operator = (const Equilateral & e);

	float getSide() const;
	void setSide(float s);


	float getArea()const;
	float getPerimeter()const;

	friend ostream & operator << (ostream & outs, const Equilateral & e);

	bool operator == (Equilateral other) const;
	bool operator != (const Equilateral & other) const;

private:
	float side;


};


#endif