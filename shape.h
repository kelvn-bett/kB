#pragma once
#ifndef Shape_h
#define Shape_h
#include <iostream>
#include <string>

class Shape {
protected:
	std::string name;
public:
	Shape(std::string name = "Amorphous Base Shape") : name(name) {}
	std::string getName();
};
#endif