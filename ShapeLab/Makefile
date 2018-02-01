
app.x: Rectangle.o Square.o EquiTris.o IsoTriangle.o RightTriangle.o ScaleneTriangle.o Circle.o Trapazoid.o IrregularPolygon.o main.o 
	g++ -o app.x Rectangle.o Square.o EquiTris.o IsoTriangle.o RightTriangle.o ScaleneTriangle.o Circle.o Trapazoid.o IrregularPolygon.o main.o

Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp -o Rectangle.o

Square.o: Square.cpp Square.h
	g++ -c Square.cpp -o Square.o

EquiTris.o: EquiTris.cpp EquiTris.h
	g++ -c EquiTris.cpp -o EquiTris.o

IsoTriangle.o: IsoTriangle.cpp IsoTriangle.h
	g++ -c IsoTriangle.cpp -o IsoTriangle.o

RightTriangle.o: RightTriangle.cpp RightTriangle.h
	g++ -c RightTriangle.cpp -o RightTriangle.o

ScaleneTriangle.o: ScaleneTriangle.cpp ScaleneTriangle.h
	g++ -c ScaleneTriangle.cpp -o ScaleneTriangle.o

Circle.o: Circle.cpp Circle.h
	g++ -c Circle.cpp -o Circle.o

IrregularPolygon.o: IrregularPolygon.cpp IrregularPolygon.h
	g++ -c IrregularPolygon.cpp -o IrregularPolygon.o

Trapazoid.o: Trapazoid.cpp Trapazoid.h
	g++ -c Trapazoid.cpp -o Trapazoid.o

main.o: main.cpp
	g++ -c main.cpp -o main.o

clean:
	rm *.o *.x
