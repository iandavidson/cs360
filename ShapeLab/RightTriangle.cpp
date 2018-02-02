#include "RightTriangle.h"

using namespace std;

RightTriangle::RightTriangle()
{
	side = 0;
	base = 0;
}

RightTriangle::RightTriangle(float b, float s)
{
	side = s;
	base = b;
}

RightTriangle::RightTriangle(const RightTriangle & e)
{
	side = e.side;
	base = e.base;
}

RightTriangle::~RightTriangle()
{

}

RightTriangle & RightTriangle::operator = (const RightTriangle & e)
{
	side = e.side;
	base = e.base;
	return * this;
}

float RightTriangle::getSide() const
{
	return side;
}


void RightTriangle::setSide(float s)
{
	side = s;
}


float RightTriangle::getBase() const
{
	return base;
}


void RightTriangle::setBase(float s)
{
	base = s;
}

float RightTriangle::getPerimeter() const
{
	return side + base + sqrt(side*side + base*base);
}

float RightTriangle::getArea() const
{
	
	float area = base * side;
	area /= 2;
	return area;
}

ostream & operator << (ostream & outs, const RightTriangle & r)
{
	outs << "A right triangle with side length of " << r.getSide() << " and a base side of ";
	outs << r.getBase() << ", has a perimeter of ";
  	outs << r.getPerimeter() << ", and an area of "; 
  	outs << r.getArea() << "." << endl;
  	return outs;
}

bool RightTriangle::operator == (RightTriangle that) const
{
	if(that.side == side && that.base == base)
		return true;
	return false;
}


bool RightTriangle::operator != (const RightTriangle & that) const
{
	if(that.side == side && that.base == base)
		return false;
	return true;
}