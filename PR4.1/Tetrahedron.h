#pragma once
#include <iostream>
#include "Figure.h"

using namespace std;

class Tetrahedron :
	public Figure
{
	double a;
public:
	Tetrahedron();
	Tetrahedron(double a);
	~Tetrahedron() {};

	virtual double Surface_area();
};

