

#include <iostream>
void main()
{
	double k = 6, x = 0.095, r = 5e-7, t, u;
	t = tan(x) + r * (1 - log(x));
	u = t / (x * x * x + 1) / (1 - exp(k - 4));
	std::cout << "t=" << t;
	std::cout << "u=" << u;

}