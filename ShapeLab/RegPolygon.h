#ifndef REGPOLYGON_H
#define REGPOLYGON_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//not done!!
class RegPolygon
{
public:
	RegPolygon();
	RegPolygon(int num, float side);
	RegPolygon(const RegPolygon & r);
	~RegPolygon();

	RegPolygon & operator = (const RegPolygon & r);

	float getSide() const;
	void setSide(float s);

	float getNumSides() const;
	void setNumSides(float s);

	float getArea()const;
	float getPerimeter()const;

	friend ostream & operator << (ostream & outs, const RegPolygon & e);

	bool operator == (RegPolygon other) const;
	bool operator != (const RegPolygon & other) const;

private:
	float side;
	int numSides;

};


#endif