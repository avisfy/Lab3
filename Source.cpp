#include <iostream>

void euler();
void r_t();

int main()
{
	std::cout << "Euler:\n";
	euler();
	std::cout << "Runge-Kutta:\n";
	r_t();
	std::cout << std::endl;
	system("pause");
	return 0;
}