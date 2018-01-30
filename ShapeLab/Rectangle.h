#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle
{
 public:

  Rectangle();//constructor
  Rectangle(const Rectangle & Rectangle);//copy constructor
  ~Rectangle();//destructor

  Rectangle & operator = (const Rectangle & s);//overloaded assignment
  
  float getSide1()const;
  void setSide1(float i);
  
  float getSide2()const;
  void setSide2(float i);

  float getArea()const;

  float getPerimeter()const;


  friend ostream & operator << (ostream & outs, const Rectangle & s);
  
  bool operator == (Rectangle other) const;
  bool operator != (const Rectangle & that) const;

 private:

  float side1;
  float side2;
  
};





#endif
