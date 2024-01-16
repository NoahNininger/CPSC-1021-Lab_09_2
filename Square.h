#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"
template <typename T>
class Square : public Shape<T>// inherit publically from Shape
{
private:
	double side { 1 };
public:
	Square() = default;
	Square(T side) :Shape<T>("Square"),side(side) {};

	T getArea() {
		return (side * side);
	}
};

#endif
