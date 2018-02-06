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
/*
//square testing:
   Square s1;//def constructor
   s1.setSide(6.5); //calls set side
   cout << endl << "Testing Square-------------------\n";
   cout << "s1: " << s1;//output operator

   Square s2 = s1;//copy constructor used
   cout << "s2: " << s2;
  
   s2.setSide(8.5);
   Square s3;
   s3 = s2;//overloaded assignment operator used
   cout << "s3: " << s3;
   
   //Testing inequality
   if (s3 != s2){
       cout << "Square inequality failed\n";
       exit(1);
   }
   // Testing equailty
   if ( s1 == s3){
       cout << "Square equality failed\n";
       exit(1);
   }

  
  

//Equalateral testing

   Equilateral e1;//def constructor
   e1.setSide(6.5); //calls set side
   cout << endl << "Testing Equilateral-------------------\n";
   cout << "e1: " << e1;//output operator

   Equilateral e2 = e1;//copy constructor used
   cout << "e2: " << e2;
  
   e2.setSide(8.5);
   Equilateral e3;
   e3 = e2;//overloaded assignment operator used
   cout << "e3: " << e3;
   
   //Testing inequality
   if (e3 != e2){
       cout << "Equilateral inequality failed\n";
       exit(1);
   }
   // Testing equailty
   if ( e1 == e3){
       cout << "Equilateral equality failed\n";
       exit(1);
   }


//Iso triangle testing
   
   Isosceles i1;//def constructor
   i1.setSide(6.5); //calls set side
   i1.setBase(12.4); //calls set base
   cout << endl << "Testing Isoceles-------------------\n";
   cout << "i1: " << i1;//output operator

   Isosceles i2 = i1;//copy constructor used
   cout << "i2: " << i2;
  
   i2.setSide(8.5);
   i2.setBase(5.4);
   Isosceles i3;
   i3 = i2;//overloaded assignment operator used
   cout << "i3: " << i3;
   
   //Testing inequality
   if (i3 != i2){
       cout << "Iso inequality failed\n";
       exit(1);
   }
   // Testing equailty
   if ( i1 == i3){
       cout << "Iso equality failed\n";
       exit(1);
   }


//Right triangle testing
   
   Right r1;//def constructor
   r1.setSide(6.5); //calls set side
   r1.setBase(12.4); //calls set base
   cout << endl << "Testing Right-------------------\n";
   cout << "r1: " << r1;//output operator

   Right r2 = r1;//copy constructor used
   cout << "r2: " << r2;
  
   r2.setSide(8.5);
   r2.setBase(5.4);
   Right r3;
   r3 = r2;//overloaded assignment operator used
   cout << "r3: " << r3;
   
   //Testing inequality
   if (r3 != r2){
       cout << "Right inequality failed\n";
       exit(1);
   }
   // Testing equailty
   if ( r1 == r3){
       cout << "Right equality failed\n";
       exit(1);
   }


//Scalene triangle testing
   
   Scalene sc1;//def constructor
   sc1.setSide1(6.5); //calls set side
   sc1.setSide2(12.4); //calls set base
   sc1.setSide3(6.7);
   cout << endl << "Testing Right-------------------\n";
   cout << "sc1: " << sc1;//output operator

   Scalene sc2 = sc1;//copy constructor used
   cout << "sc2: " << sc2;
  
   sc2.setSide1(8.5);
   sc1.setSide3(5.7);
   sc1.setSide3(23.7);
   Scalene sc3;
   sc3 = sc2;//overloaded assignment operator used
   cout << "sc3: " << sc3;
   
   //Testing inequality
   if (sc3 != sc2){
       cout << "Scalene inequality failed\n";
       exit(1);
   }
   // Testing equailty
   if ( sc1 == sc3){
       cout << "Scalene equality failed\n";
       exit(1);
   }
*/
// IrregularPolygon testing

  //float sides [4] = { 12, 23, 34, 54 };
  float sides [4] = { 12, 12, 12, 12 };
  float angles [4] = { 90, 90, 90, 90 };
  
  IrregularPolygon *poly = new IrregularPolygon(4, sides, angles);
  cout << endl << "Testing Irreg Poly-------------------\n";
  cout << "poly: " << *poly;

  IrregularPolygon *poly2 = poly; //copy constructor used
  cout << "poly2: " << *poly2 << endl; 
  
  delete poly;
  delete poly2;

// RegPolygon testing
/*   
   RegPolygon rp1;//def constructor
   rp1.setSide(6.5); //calls set side
   rp1.setNumSides(12); //calls set num sides 
   cout << endl << "Testing RegPolygon-------------------\n";
   cout << "rp1: " << rp1;//output operator

   RegPolygon rp2 = rp1;//copy constructor used
   cout << "rp2: " << rp2;
   
   rp2.setSide(9.4); //calls set side
   rp2.setNumSides(20); //calls set num sides 
   
   RegPolygon rp3;
   rp3 = rp2;//overloaded assignment operator used
   cout << "rp3: " << rp3;
   
   //Testing inequality
   if (rp3 != rp2){
       cout << "Regular Polygon inequality failed\n";
       exit(1);
   }
   // Testing equailty
   if ( rp1 == rp3){
       cout << "Regular Polygon equality failed\n";
       exit(1);
   }

// Parallelogram testing 

   Parallelogram p1;//def constructor
   p1.setSide1(6.5); //calls set side
   p1.setSide2(34.5); //calls set side
   p1.setAngle(30.6); //calls set angle
   cout << endl << "Testing Parallelogram-------------------\n";
   cout << "p1: " << p1;//output operator

   Parallelogram p2 = p1;//copy constructor used
   cout << "p2: " << p2;
   
   p2.setSide1(9.4); //calls set side
   p2.setSide2(23.4); //calls set side
   p2.setAngle(23.5); //calls set num sides 
   
   Parallelogram p3;
   p3 = p2;//overloaded assignment operator used
   cout << "p3: " << p3;
   
   //Testing inequality
   if (p3 != p2){
       cout << "Paralleogram inequality failed\n";
       exit(1);
   }
   // Testing equailty
   if ( p1 == p3){
       cout << "Paralleogram equality failed\n";
       exit(1);
   }
*/
//Testing for a Trapezoid
  
  
  
  
  /*Trapazoid s1;
  s1.setTop(12.6);
  s1.setBottom(12.3);
  s1.setHeight(12.2);
  cout << s1 << endl;
    
  //Testing Regular Polygon
  RegPolygon p1;
  p1.setNumSides(6);
  p1.setSide(12);
  cout << p1 << endl;

  */

   cout <<"successful" << endl;



  return 0;
}
