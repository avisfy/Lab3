#include "Header.h"
#include <iostream>

void r_t()
{
	double x = xBegin;
	//yi
	double y = Y0;
	//yi+1
	double y1 = Y0;
	double k1, k2, k3, k4;

	std::cout << std::fixed;
	std::cout.precision(4);
	std::cout << "\n" << "x" << "\ty\n";
	while ((x<xEnd) || (fabs(x - xEnd)<eps))
	{
		std::cout << x << "\t" << y << "\t\n";
		k1 = f(x, y);
		k2 = f(x + h/2.0, y + h*k1/2.0);
		k3 = f(x + h/2.0, y + h*k2/2.0);
		k4 = f(x + h, y + h*k3);
		y1 = y + h * (k1 + 2*k2 + 2*k3 + k4)/6.0;
		x = x + h;
		y = y1;
	}
}