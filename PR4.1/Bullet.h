#pragma once
#include <iostream>
#include "Figure.h"

using namespace std;

class Bullet :
	public Figure
{
	double r;
public:
	Bullet();
	Bullet(double r);
	~Bullet() {};

	virtual double Surface_area();
};

