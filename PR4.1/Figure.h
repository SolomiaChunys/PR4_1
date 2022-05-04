#pragma once
class Figure
{
	double x, y, z;
public:
	Figure();
	Figure(double x, double y, double z);
	~Figure() {};

	double GetX() { return x; }
	double GetY() { return y; }
	double GetZ() { return z; }

	virtual double Surface_area() = 0;
};

