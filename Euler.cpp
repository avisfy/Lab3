#include "Header.h"
#include <iostream>

void euler()
{
	double x = xBegin;
	//yi
	double y = Y0;
	//yi+1
	double y1 = Y0;
	double fxy = 0;

	std::cout << std::fixed;
	std::cout.precision(6);
	//std::cout << "\n" << "x" << "\ty" << "\tf(x, y)\n";
	std::cout << "\n" << "x" << "\ty\n";
	while ((x<xEnd) || (fabs(x-xEnd)<eps))
	{
		fxy = f(x, y);
		//std::cout << x << "\t" << y << "\t" << fxy << "\n";
		std::cout << x << "\t" << y << "\t\n";
		y1 = y + h*fxy;
		x = x + h;
		y = y1;
	}
}