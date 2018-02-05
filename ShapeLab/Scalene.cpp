#include "Scalene.h"

using namespace std;

Scalene::Scalene()
{
	side1 = 0;
	side2 = 0;
	side3 = 0;
}

Scalene::Scalene(float s1, float s2, float s3)
{
	side1 = s1;
	side2 = s2;
	side3 = s3;
}

Scalene::Scalene(const Scalene & e)
{
	side1 = e.side1;
	side2 = e.side2;
	side3 = e.side3;
}

Scalene::~Scalene()
{

}

Scalene & Scalene::operator = (const Scalene & e)
{
	side1 = e.side1;
	side2 = e.side2;
	side3 = e.side3;
	return * this;
}

float Scalene::getSide1() const
{
	return side1;
}


void Scalene::setSide1(float s)
{
	side1 = s;
}

float Scalene::getSide2() const
{
	return side2;
}


void Scalene::setSide2(float s)
{
	side2 = s;
}

float Scalene::getSide3() const
{
	return side3;
}


void Scalene::setSide3(float s)
{
	side3 = s;
}

float Scalene::getPerimeter() const
{
	return side1 + side2 + side3;
}

float Scalene::getArea() const
{
	float s = (side1 + side2 + side3)/2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
	//figure this out
}

ostream & operator << (ostream & outs, const Scalene & r)
{
	outs << "Scalene triangle with side1: " << r.getSide1() << "; side2: ";
	outs << r.getSide2() << " ; side3: " << r.getSide3() << ", perimeter: ";
  	outs << r.getPerimeter() << "; area: "; 
  	outs << r.getArea() << "." << endl;
  	return outs;
}

bool Scalene::operator == (Scalene that) const
{
	if(that.side1 == side1 && that.side2 == side2 && that.side3 == side3)
		return true;
	return false;
}


bool Scalene::operator != (const Scalene & that) const
{
	if(that.side1 == side1 && that.side2 == side2 && that.side3 == side3)
		return false;
	return true;
}