#include "IsoTriangle.h"

using namespace std;

IsoTriangle::IsoTriangle()

{
	side = 0;
	base = 0;
}

IsoTriangle::IsoTriangle(const IsoTriangle & i)
{
	side = i.side;
	base = i.base;
}

IsoTriangle::~IsoTriangle()
{

}

IsoTriangle & IsoTriangle::operator = (const IsoTriangle & e)
{
	side = e.side;
	base = e.base;
	return * this;
}

float IsoTriangle::getSide() const
{
	return side;
}


void IsoTriangle::setSide(float s)
{
	side = s;
}

float IsoTriangle::getBase() const
{
	return base;
}


void IsoTriangle::setBase(float b)
{
	base = b;
}



float IsoTriangle::getArea() const
{
	float area = sqrt(4*(side * side) - (base * base));
	area *= base/4;
	return area;
}


float IsoTriangle::getPerimeter() const
{
	return base + side * 2;
}

ostream & operator << (ostream & outs, const IsoTriangle & e)
{
	outs << "A isosceles triangle with side length of " << e.getSide() << " and a base of ";
	outs << e.getBase() << ", has a perimeter of ";
  	outs << e.getPerimeter() << ", and an area of " << e.getArea() << "." << endl;
  	return outs;
}

bool IsoTriangle::operator == (IsoTriangle other) const
{
	if(other.side == side && other.base == base)
		return true;
	return false;

}


bool IsoTriangle::operator != (const IsoTriangle & other) const
{
	if(other.side == side && other.base == base)
		return false;
	return true;
}



