#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"
template<typename T>
class Trapezoid : public Shape<T> // inherit publically from Shape
{
private:
	T base1{1};
	T base2{1};
	T height{1};
public:
	Trapezoid() = default;
	Trapezoid(T base1, T base2, T height) :Shape<T>("trapezoid"),base1(base1), base2(base2), height(height) {};


	T getArea() {
		return (((base1 + base2) / 2) * height);
	}
};

#endif
