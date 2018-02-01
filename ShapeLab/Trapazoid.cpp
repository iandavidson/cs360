#include "Trapazoid.h"
using namespace std;

Trapazoid::Trapazoid()
//default constructor
{
  top = 0;
  bottom = 0;
  height = 0;
}

Trapazoid::Trapazoid(float top, float bottom, float height)
{

  this->top = top;
  this->bottom = bottom;
  this->height = height;

}


Trapazoid::Trapazoid(const Trapazoid & s)
//copy constructor
{
  //this.setSide(s.getSide());
  top = s.top;
  bottom = s.bottom;
  height = s.height;
}

Trapazoid::~Trapazoid()
{

}

Trapazoid & Trapazoid::operator = (const Trapazoid & s) //overloaded assignment operator
{
  top = s.top;
  bottom = s.bottom;
  height = s.height;
  return * this;
  
}

float Trapazoid::getTop() const
{
  return top;

}

void Trapazoid::setTop(float s)
{
  top = s;
}


float Trapazoid::getBottom() const
{
  return bottom;

}

void Trapazoid::setBottom(float s)
{
  bottom = s;
}

float Trapazoid::getHeight() const
{
  return height;

}

void Trapazoid::setHeight(float s)
{
  height = s;
}



float Trapazoid::getArea() const
{
  return (top + bottom)/2 * height;
}

float Trapazoid::getPerimeter() const
{

  float temp = top + bottom;
  temp += sqrt(top * top + bottom * bottom); 
  return temp;
}

ostream & operator << (ostream & outs, const Trapazoid & s)
{
  outs << "Trapazoid with top: " << s.getTop() << ", bottom: ";
  outs <<  s.getBottom() << " height: " << ", has a perimeter of ";
  outs << s.getPerimeter() << ", and an area of " << s.getArea() << "." << endl;
  return outs;
}

bool Trapazoid::operator == (Trapazoid other) const
{
  return (top == other.top  && bottom == other.bottom && height == other.height);
}

bool Trapazoid::operator != (const Trapazoid & other) const
{
  if(top == other.top  && bottom == other.bottom && height == other.height){
    return false;
  }
  return true;
}








