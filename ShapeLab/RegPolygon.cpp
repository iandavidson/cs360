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
	numSides = e.numSides;
	return * this;
}

float RegPolygon::getSide() const
{
	return side;
}


void RegPolygon::setSide(float s)
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
	float temp = (side * side) * numSides;
    return temp / (4 * tan ( (180/M_PI) * (180/numSides)));
}
	//figure this out


ostream & operator << (ostream & outs, const RegPolygon & r)
{
	outs << "Regular Polygon with all sides: " << r.getSide() << "; total num sides: ";
	outs << r.getNumSides() << "; perimeter: ";
  	outs << r.getPerimeter() << "; area: "; 
  	outs << r.getArea() << "." << endl;
  	return outs;
}

bool RegPolygon::operator == (RegPolygon that) const
{
	if(that.side == side && that.numSides == numSides)
		return true;
	return false;
}


bool RegPolygon::operator != (const RegPolygon & that) const
{
	if(that.side == side && that.numSides == numSides)
		return false;
	return true;
}
