#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
using namespace std;

template<typename T>
class Shape{
private:
  std::string name {""};
public:
  Shape() = default;
  Shape(std::string name) : name(name) {};

  // implement printName() and tag it as 'final'
  // to prevent derived-classes from overriding it
  virtual std::string printName() final {
	  return name;
  };

  // implement getArea() as an abstract function
  virtual T getArea()=0;
};

#endif
