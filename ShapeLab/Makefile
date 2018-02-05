app.x: Rectangle.o Square.o Rhombus.o Equilateral.o Isosceles.o Right.o Scalene.o Circle.o Trapazoid.o Parallelogram.o RegPolygon.o IrregularPolygon.o main.o 
	g++ -o app.x Rectangle.o Square.o Rhombus.o Equilateral.o Isosceles.o Right.o Scalene.o Circle.o Trapazoid.o Parallelogram.o RegPolygon.o IrregularPolygon.o main.o

Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp -o Rectangle.o

Trapazoid.o: Trapazoid.cpp Trapazoid.h
	g++ -c Trapazoid.cpp -o Trapazoid.o

Parallelogram.o: Parallelogram.cpp Parallelogram.h
	g++ -c Parallelogram.cpp -o Parallelogram.o

Rhombus.o: Rhombus.cpp Rhombus.h
	g++ -c Rhombus.cpp -o Rhombus.o

Square.o: Square.cpp Square.h
	g++ -c Square.cpp -o Square.o

Equilateral.o: Equilateral.cpp Equilateral.h
	g++ -c Equilateral.cpp -o Equilateral.o

Isosceles.o: Isosceles.cpp Isosceles.h
	g++ -c Isosceles.cpp -o Isosceles.o

Right.o: Right.cpp Right.h
	g++ -c Right.cpp -o Right.o

Scalene.o: Scalene.cpp Scalene.h
	g++ -c Scalene.cpp -o Scalene.o

Circle.o: Circle.cpp Circle.h
	g++ -c Circle.cpp -o Circle.o

IrregularPolygon.o: IrregularPolygon.cpp IrregularPolygon.h
	g++ -c IrregularPolygon.cpp -o IrregularPolygon.o

RegPolygon.o: RegPolygon.cpp RegPolygon.h
	g++ -c RegPolygon.cpp -o RegPolygon.o 


main.o: main.cpp
	g++ -c main.cpp -o main.o

clean:
	rm *.o *.x *~
