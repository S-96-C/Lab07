#include "Circle.h"
#include "RectangleX.h"
#include <iostream>
#include "Square.h"
using namespace std;

int main() {
	double grassArea, CircleArea, BigRectangleArea, SmallRectangleArea, SquareArea;

	Circle pond;
	RectangleX SmallRactangle;
	RectangleX BigRectangle;
	Square square;

	pond.setRadius(5);

	SmallRactangle.setLength(7);
	SmallRactangle.setWidth(2);

	BigRectangle.setLength(18);
	BigRectangle.setWidth(10);

	square.setLength(4);

	CircleArea = pond.calcArea();
	SmallRectangleArea = SmallRactangle.calcArea();
	BigRectangleArea = BigRectangle.calcArea();
	SquareArea = square.calcArea();



	grassArea = BigRectangleArea - (SmallRectangleArea + CircleArea + SquareArea);

	cout << "Grass Area = " << grassArea << endl;

	return 0;


}