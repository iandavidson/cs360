#ifndef ISOTRIANGLE_H
#define ISOTRIANGLE_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class IsoTriangle
{
public:
	IsoTriangle();
	IsoTriangle(float base, float side);
	IsoTriangle(const IsoTriangle & i);
	~IsoTriangle();

	IsoTriangle & operator = (const IsoTriangle & i);

	float getSide() const;
	void setSide(float s);

	float getBase() const;
	void setBase(float b);


	float getArea()const;
	float getPerimeter()const;

	friend ostream & operator << (ostream & outs, const IsoTriangle & i);

	bool operator == (IsoTriangle other) const;
	bool operator != (const IsoTriangle & other) const;

private:
	float side;
	float base;


};


#endif