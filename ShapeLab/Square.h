#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <iomanip>

using namespace std;

class Square
{
 public:

  Square();//constructor
  Square(float s);
  Square(const Square & square);//copy constructor
  ~Square();//destructor

  Square & operator = (const Square & s);//overloaded assignment
  
  float getSide()const;
  void setSide(float i);
  //float & Side();

  float getArea()const;

  float getPerimeter()const;


  friend ostream & operator << (ostream & outs, const Square & s);
  
  bool operator == (Square other) const;
  bool operator != (const Square & that) const;

 private:

  float side;
  
};





#endif
