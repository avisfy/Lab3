#pragma once
#include <cmath>

//y'= cos(x)*(y - 1) = f(x, y);
inline double f(double x, double y)
{
	return cos(x)*(y-1);
}

inline double y(double x)
{
	return exp(sin(x)) + 1;
}

//(x0, y0)
const double X0 = 0;
const double Y0 = 2.0;
//[x0, x0+1] = [0, 1]
const double xBegin = X0;
const double xEnd = X0 + 1.0f;

const double h = 0.1;

const double eps = 0.0000001;



