#ifndef Triangle_h
#define Triangle_h

#include "Shape.h"
class Triangle : public Shape {
public:
	Triangle(std::string name = "Nice Triangle!") : Shape(name) {}
};
#endif