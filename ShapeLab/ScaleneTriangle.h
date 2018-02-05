#ifndef SCALENE_H
#define SCALENE_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Scalene
{
public:
	Scalene();
	Scalene(float s1, float s2, float s3); //sides: 1, 2 and 3 
	Scalene(const Scalene & r);
	~Scalene();

	Scalene & operator = (const Scalene & r);

	float getSide1() const;
	void setSide1(float s);

	float getSide2() const;
	void setSide2(float s);

	float getSide3() const;
	void setSide3(float s);

	float getArea()const;
	float getPerimeter()const;

	friend ostream & operator << (ostream & outs, const Scalene & e);

	bool operator == (Scalene other) const;
	bool operator != (const Scalene & other) const;

private:
	float side1;
	float side2;
	float side3;

};


#endif