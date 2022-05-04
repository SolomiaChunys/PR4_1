#include "Parallelepiped.h"
#include <iostream>

using namespace std;

Parallelepiped::Parallelepiped()
{}

Parallelepiped::Parallelepiped(double x, double y, double z)
	: Figure(x,y,z)
{}

double Parallelepiped::Surface_area()
{
	return 2 * (GetX() * GetY() + GetX() * GetZ() + GetY() * GetZ());
}