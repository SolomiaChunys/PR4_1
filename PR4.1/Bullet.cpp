#include "Bullet.h"
#include <iostream>
#include <math.h>
#define PI 3.14159265358979323846

using namespace std;

Bullet::Bullet()
	:r(0)
{}

Bullet::Bullet(double r)
	: r(r)
{}

double Bullet::Surface_area()
{
	return 4 * PI * pow(r, 2);
}