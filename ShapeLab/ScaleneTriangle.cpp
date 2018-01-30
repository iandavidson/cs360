#include "ScaleneTriangle.h"

using namespace std;

ScaleneTriangle::ScaleneTriangle()

{
	side1 = 0;
	side2 = 0;
	side3 = 0;
}

ScaleneTriangle::ScaleneTriangle(const ScaleneTriangle & e)
{
	side1 = e.side1;
	side2 = e.side2;
	side3 = e.side3;
}

ScaleneTriangle::~ScaleneTriangle()
{

}

ScaleneTriangle & ScaleneTriangle::operator = (const ScaleneTriangle & e)
{
	side1 = e.side1;
	side2 = e.side2;
	side3 = e.side3;
	return * this;
}

float ScaleneTriangle::getSide1() const
{
	return side1;
}


void ScaleneTriangle::setSide1(float s)
{
	side1 = s;
}

float ScaleneTriangle::getSide2() const
{
	return side2;
}


void ScaleneTriangle::setSide2(float s)
{
	side2 = s;
}

float ScaleneTriangle::getSide3() const
{
	return side3;
}


void ScaleneTriangle::setSide3(float s)
{
	side3 = s;
}

float ScaleneTriangle::getPerimeter() const
{
	return side1 + side2 + side3;
}

float ScaleneTriangle::getArea() const
{
	float s = (side1 + side2 + side3)/2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
	//figure this out
}

ostream & operator << (ostream & outs, const ScaleneTriangle & r)
{
	outs << "A scalene triangle with side1 length of " << r.getSide1() << " a  side2 of ";
	outs << r.getSide2() << " and a side3 of length " << r.getSide3() << ", has a perimeter of ";
  	outs << r.getPerimeter() << ", and an area of "; 
  	outs << r.getArea() << "." << endl;
  	return outs;
}

bool ScaleneTriangle::operator == (ScaleneTriangle that) const
{
	if(that.side1 == side1 && that.side2 == side2 && that.side3 == side3)
		return true;
	return false;
}


bool ScaleneTriangle::operator != (const ScaleneTriangle & that) const
{
	if(that.side1 == side1 && that.side2 == side2 && that.side3 == side3)
		return false;
	return true;
}