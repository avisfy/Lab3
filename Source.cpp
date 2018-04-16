#include <iostream>

void euler();
void r_t();
void analiti4();

int main()
{
	std::cout << "Euler:";
	euler();
	std::cout << "\nRunge-Kutta:";
	r_t();
	std::cout << "\nAnaliticheski:";
	analiti4();
	std::cout << std::endl;
	system("pause");
	return 0;
}