#include<iostream>
#define PI 3.14
class Cylinder
{
private:
	int radius;
	int height;
	double area;
	double volume;
public:

	void setRadius(int r) { radius = r; }
	void setHeight(int h) { height = h; }
	double getArea()
	{
		return 2 * PI*radius*height + 2 * PI*radius*radius;
	}
	double getVolume()
	{
		return PI*radius*radius*height;
	}
};

int main()
{
	Cylinder cylinder;
	cylinder.setRadius(7);
	cylinder.setHeight(14);
	std::cout << cylinder.getArea() << "\n";
	std::cout << cylinder.getVolume() << "\n";
}