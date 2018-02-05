#include <iostream>
#include <string>
#include <cmath>
#include "Square.h"
#include "Rectangle.h"
#include "Equilateral.h"
#include "Isosceles.h"
#include "Right.h"
#include "Scalene.h"
#include "IrregularPolygon.h"
#include "Parallelogram.h"
#include "Trapazoid.h"
#include "RegPolygon.h"

using namespace std;

int main()
{

//square testing:
  // Square s1;//def constructor
  // s1.setSide(6.5); //calls set side

  // cout << s1;//output operator

  // Square s2 = s1;//copy constructor used

  // cout << s2;

  // s2.setSide(8.5);
  
  // Square s3;

  // s3 = s2;//overloaded assignment operator used

  // cout << s3;

  

//Equalateral testing

  // EqualTriangle e1;
  // e1.setSide(10);

  // cout << e1;
  

  // EqualTriangle e2 = e1;

  // e2.setSide(15);

  // cout << e2;

  // EqualTriangle e3;

  // e3 = e2;

  // cout << e3;

//Iso triangle testing

  // IsoTriangle i1; 
  // i1.setSide(45);
  // i1.setBase(20);

  // cout << i1;

  // IsoTriangle i2 = i1;

  // i2.setSide(25);
  // i2.setBase(5);

  // IsoTriangle i3;

  // i3 = i2;

  // cout << i3;

  // cout <<"successful" << endl;

//Right triangle testing

  // RightTriangle r1; 
  // r1.setSide(45);
  // r1.setOther(20);

  // cout << r1;

  // RightTriangle r2 = r1;

  // r2.setSide(25);
  // r2.setOther(5);

  // RightTriangle r3;

  // r3 = r2;

  // cout << r3;
  // float side, other, area;
  // side = r3.getSide();
  // other = r3.getOther();
  // area = side * other;
  // area /= 2;
  // cout << " area" << area << endl;

//Scalene triangle testing

  // ScaleneTriangle s1;
  // s1.setSide1(5);
  // s1.setSide2(6);
  // s1.setSide3(7);

  //cout << s1; //all get all sides, get area and perimeter and output operator


  // ScaleneTriangle s2 = s1; //copy constructor


  // s2.setSide3(10);

  // s1 = s2;

  // cout << s1 << "side3 should be 10, not 7" << endl;


  // if(s1 == s2){
    // cout << "equality not works" << endl;
  // }

  // s1.setSide2(15);

  // if(s1 != s2){
   //  cout << "inequality operator works" << endl;
  //}
  
  /*vector<float> sides;
  sides.push_back(12);
  sides.push_back(23);
  sides.push_back(34);
  sides.push_back(54);
  vector<float> angles;
  angles.push_back(60);
  angles.push_back(100);
  angles.push_back(100);
  angles.push_back(100);
  
  IrregularPolygon *poly = new IrregularPolygon(4, sides, angles);

  cout << *poly << endl;
  delete poly;
  */

  // Testing for Parallleogram
  //Parallelogram p1;
  //p1.setSide1(20);
  //p1.setSide2(20);
  //p1.setAngle(60);
  //cout << p1 << endl;
  
  //Testing for a Trapezoid
  Trapazoid s1;
  s1.setTop(12.6);
  s1.setBottom(12.3);
  s1.setHeight(12.2);
  cout << s1 << endl;
    
  //Testing Regular Polygon
  RegPolygon p1;
  p1.setNumSides(6);
  p1.setSide(12);
  cout << p1 << endl;



   cout <<"successful" << endl;



  return 0;
}
