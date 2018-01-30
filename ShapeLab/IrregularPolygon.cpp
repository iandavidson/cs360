#include "IrregularPolygon.h"
#include <cmath>

using namespace std;

IrregularPolygon::IrregularPolygon()//edit this shit
//default constructor
{
  side = 0;
}

IrregularPolygon::IrregularPolygon(const IrregularPolygon & s)	//edit this shit
//copy constructor
{
  numSides = getNumSides();
  sides = s.getSides();
  angles = s.getAngles();
}

IrregularPolygon::~IrregularPolygon()
{

}

IrregularPolygon & IrregularPolygon::operator = (const IrregularPolygon & s) //overloaded assignment operator
//edit this shit
{
  numSides = s.getNumSides();
  sides = s.getSides();
  angles = s.getAngles();
  return * this;
  
}

float IrregularPolygon::getNumsides() const
{
  return sides;

}

vector<float> IrregularPolygon::getSides()
{
  return sides;

}

vector<float> IrregularPolygon::getAngles()
{
  return angles;

}

float IrregularPolygon::triagleArea(float s1, float s2, float s3)
{
  float s = (s1 + s2 + s3)/2;
  return sqrt(s *(s - s1) * (s - s2) * (s - s3));


float IrregularPolygon::getArea() const
{
 // needs work 
}

float IrregularPolygon::getPerimeter() const
{
  int perimeter = 0;
  for (int i = 0; i < numSides; i++){
    perimeter += sides[i];
  }
  return perimeter;
}

ostream & operator << (ostream & outs, const IrregularPolygon & s)
{
  outs << "A Irregular Polygon with " << s.getNumSides() << " sides" << ", has a perimeter of ";
  outs << s.getPerimeter() << ", and an area of " << s.getArea() << "." << endl;
  return outs;
}

bool IrregularPolygon::operator == (IrregularPolygon other) const
{
  if (numSides != other.numSides)
      return false;
  for (int i = 0; i < numSides; i++) {
      if ((sides[i] != other.sides[i]) || (angles[i] != other.angles[i]))
          return false;
  }
  return true;
}

bool IrregularPolygon::operator != (const IrregularPolygon & other) const
{
  for (int i = 0; i < numSides; i++) {
      if ((sides[i] != other.sides[i]) || (angles[i] != other.angles[i]))
          return true;
  }
  return false;

}








