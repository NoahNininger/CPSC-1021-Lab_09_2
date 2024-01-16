#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Trapezoid.h"
#include <iostream>
#include <iomanip>

#include <vector>

using namespace std;

int main()
{
  // make an object named 'circle' from class Circle with radius initialized to 2.0
	Circle<double> circle(2.0);
	Circle<int> circle1(2);
  // make an object named 'square' from class Square with side initialized to 2.0
	Square<double> square(2.0);
	Square<int> square1(2);
  // make an object named 'rectangle' from class Rectangle with length initialized to 2.5 and width to 3.0
	Rectangle<double> rectangle(2.5, 3.0);
	Rectangle<int> rectangle1(2, 3);
  // make an object named 'trapezoid' from class Trapezoid with base1 initialized to 2.5, base2 to 3.5, and height to 4.0
	Trapezoid<double> trapezoid(2.5, 3.5, 4.0);
	Trapezoid<int> trapezoid1(2.5, 6, 5);

  
  // make a vector 'vector<Type>shapeVect {element0, element1, element2, element3}'
  // where 'Type' is a pointer to class Shape and each element is the memory address
  // of one of objects you have instantiated above
	vector<Shape<double>*> shapeVect {&circle, &square, &rectangle, &trapezoid};
	vector<Shape<int>*> shapeVect1{ &circle1, &square1, &rectangle1, &trapezoid1 };

  // use a range-based for loop to print the name and area of each object using
  // functions printName() and getArea() accessed through the base class pointer
	for (Shape<double>* i : shapeVect) {
		cout << "Area of " << i->printName() << " is: " << fixed << setprecision(1) << i->getArea() << endl;
	}
	for (Shape<int>* i : shapeVect1) {
		cout << "Area of " << i->printName() << " is: " << fixed << setprecision(1) << i->getArea() << endl;
	}
  
   return 0;
}
