#include "RegPolygon.h"

using namespace std;

RegPolygon::RegPolygon()
{
	side = 0;
	numSides = 0;
}

RegPolygon::RegPolygon(int num, float s)
{
	side = s;
	numSides = num;
	
}

RegPolygon::RegPolygon(const RegPolygon & e)
{
	side = e.side;
	numSides = e.numSides;
}

RegPolygon::~RegPolygon()
{

}

RegPolygon & RegPolygon::operator = (const RegPolygon & e)
{
	side = e.side;	
	numSides = e.numSides
	return * this;
}

float RegPolygon::getSide() const
{
	return side;
}


void RegPolygon::setSide1(float s)
{
	side = s;
}

float RegPolygon::getNumSides() const
{
	return numSides;
}


void RegPolygon::setNumSides(float s)
{
	numSides = s;
}

float RegPolygon::getPerimeter() const
{
	return side * numSides;
}

float RegPolygon::getArea() const
{
	
	//figure this out
}

ostream & operator << (ostream & outs, const RegPolygon & r)
{
	outs << "A scalene triangle with side1 length of " << r.getSide() << "; total sides: ";
	outs << r.getNumSides() << "; perimeter: ";
  	outs << r.getPerimeter() << "; area: "; 
  	outs << r.getArea() << "." << endl;
  	return outs;
}

bool RegPolygon::operator == (RegPolygon that) const
{
	if(that.side1 == side1 && that.side2 == side2 && that.side3 == side3)
		return true;
	return false;
}


bool RegPolygon::operator != (const RegPolygon & that) const
{
	if(that.side1 == side1 && that.side2 == side2 && that.side3 == side3)
		return false;
	return true;
}