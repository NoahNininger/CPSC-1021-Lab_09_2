#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

template <typename T>
class Circle : public Shape<T> // inherit publically from Shape
{
private:
	T radius { 1 };
	double const PI { 3.14 };
public:
	Circle() = default;
	Circle(T radius):Shape<T>("Circle"), radius(radius) {};
	
	
	T getArea(){
		return (radius * radius * PI);
	}
};

#endif
