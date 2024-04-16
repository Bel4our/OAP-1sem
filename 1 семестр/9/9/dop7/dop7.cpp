#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a = 5, b = 11, n = 200;
	double h = (b - a) / n, x = a, s = 0;
	while (x < (b - h))
	{
		s += h * (exp(x) + 2 + exp(x + h) + 2) / 2;
		x = x + h;
	}
	cout << "Площадь равна = " << s;
}