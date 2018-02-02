#ifndef RHOMBUS_H
#define RHOMBUSs_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Rhombus
{
 public:

  Rhombus();//constructor
  Rhombus(float s, float a);
  Rhombus(const Rhombus & rhombus);//copy constructor
  ~Rhombus();//destructor

  Rhombus & operator = (const Rhombus & s);//overloaded assignment
  
  float getSide()const;
  void setSide(float i);
  //float & Side();

  float getAngle()const;
  void setAngle(float i);


  float getArea()const;

  float getPerimeter()const;


  friend ostream & operator << (ostream & outs, const Rhombus & s);
  
  bool operator == (Rhombus other) const;
  bool operator != (const Rhombus & that) const;

 private:

  float side;
  float angle;
};





#endif
