#include "RightTriangle.h"

using namespace std;

RightTriangle::RightTriangle()

{
	side = 0;
	other = 0;
}

RightTriangle::RightTriangle(const RightTriangle & e)
{
	side = e.side;
	other = e.other;
}

RightTriangle::~RightTriangle()
{

}

RightTriangle & RightTriangle::operator = (const RightTriangle & e)
{
	side = e.side;
	other = e.other;
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


float RightTriangle::getOther() const
{
	return other;
}


void RightTriangle::setOther(float s)
{
	other = s;
}

float RightTriangle::getPerimeter() const
{
	return side + other + sqrt(side*side + other*other);
}

float RightTriangle::getArea() const
{
	
	float area = other * side;
	area /= 2;
	return area;
}

ostream & operator << (ostream & outs, const RightTriangle & r)
{
	outs << "A right triangle with side length of " << r.getSide() << " and a other side of ";
	outs << r.getOther() << ", has a perimeter of ";
  	outs << r.getPerimeter() << ", and an area of "; 
  	outs << r.getArea() << "." << endl;
  	return outs;
}

bool RightTriangle::operator == (RightTriangle that) const
{
	if(that.side == side && that.other == other)
		return true;
	return false;
}


bool RightTriangle::operator != (const RightTriangle & that) const
{
	if(that.side == side && that.other == other)
		return false;
	return true;
}