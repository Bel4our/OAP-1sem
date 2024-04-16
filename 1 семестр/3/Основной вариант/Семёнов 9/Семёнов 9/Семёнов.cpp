#include <iostream>
int main()
{
	double y = 0.5, c = 1.4, x = 2e-4, z, u;

	z = exp(c * x) / y + 3;
	u = sqrt(z * z * z - 0.1 * z);
	std::cout << "z=" << z << "; ";
	std::cout << " u=" << u;

 }