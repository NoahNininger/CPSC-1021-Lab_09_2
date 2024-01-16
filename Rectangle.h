#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"
template <typename T>
class Rectangle : public Shape<T>// inherit publically from Shape
{
private:
	T length{1};
	T width{1};
public:
	Rectangle() = default;
	Rectangle(T length, T width) :Shape<T>("Rectangle"),length(length), width(width) {};


	T getArea() {
		return (width * length);
	}
};

#endif
