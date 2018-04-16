#include "Header.h"
#include <iostream>

void analiti4()
{
	double x = xBegin;
	//yi
	double Y = Y0;


	std::cout << std::fixed;
	std::cout.precision(6);
	std::cout << "\n" << "x" << "\ty\n";
	while ((x<xEnd) || (fabs(x - xEnd)<eps))
	{
		std::cout << x << "\t" << Y << "\t\n";
		x = x + h;
		Y = y(x);
	}
}