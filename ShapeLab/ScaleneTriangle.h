#ifndef ScaleneTRIANGLE_H
#define ScaleneTRIANGLE_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//not done!!
class ScaleneTriangle
{
public:
	ScaleneTriangle();
	ScaleneTriangle(const ScaleneTriangle & r);
	~ScaleneTriangle();

	ScaleneTriangle & operator = (const ScaleneTriangle & r);

	float getSide1() const;
	void setSide1(float s);

	float getSide2() const;
	void setSide2(float s);

	float getSide3() const;
	void setSide3(float s);

	float getArea()const;
	float getPerimeter()const;

	friend ostream & operator << (ostream & outs, const ScaleneTriangle & e);

	bool operator == (ScaleneTriangle other) const;
	bool operator != (const ScaleneTriangle & other) const;

private:
	float side1;
	float side2;
	float side3;

};


#endif