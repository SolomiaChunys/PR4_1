#pragma once
#include <iostream>
#include "Figure.h"

using namespace std;

class Parallelepiped :
	public Figure
{
public:
	Parallelepiped();
	Parallelepiped(double, double, double);
	~Parallelepiped() {};

	virtual double Surface_area();
};

