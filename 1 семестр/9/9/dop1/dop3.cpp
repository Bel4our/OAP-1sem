#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a = 1, b = 6, n = 200, x, s, h, fx, fxh;
	h = (b - a) / n; x = a; s = 0;
	fx = pow(x, 3) + 1;
	fxh = pow(x + h, 3) + 1;
	while (x < (b - h))
	{
		s = s + h * ((pow(x, 3) + 1) + (pow(x + h, 3) + 1)) / 2;
		x = x + h;
	}
	cout << "Площадь равна = " << s;
}