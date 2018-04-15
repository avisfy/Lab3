#pragma once
#include <cmath>

//y'= cos(x)*(y - 1) = f(x, y);
inline double f(double x, double y)
{
	return pow(x, 2)*exp(x)+y*2.0f/x;
}

//(x0, y0)
const double X0 = 1.0f;
const double Y0 = exp(1);
//[x0, x0+1] = [0, 1]
const double xBegin = X0;
const double xEnd = X0 + 1.0f;

const double h = 0.1;

const double eps = 0.0000001;

