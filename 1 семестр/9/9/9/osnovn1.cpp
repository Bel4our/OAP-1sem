#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a = 4, b = 8, n = 200, x, s, h, fx, fxh;
	h = (b - a) / n; x = a; s = 0;
	fx = pow(x, 2) - 4;
	fxh = pow(x + h, 2) - 4;
	while (x < (b - h))
	{
		s = s + h * (fx + fxh) / 2;
		x = x + h;
	}
	cout << "Площадь равна = " << s;
}