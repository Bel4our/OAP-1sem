#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a = 8, b = 12, n = 200, x, s, h, fx, fxh;
	h = (b - a) / n; x = a; s = 0;
	fx = 5 - pow(x, 2);
	fxh = 5 - pow(x + h, 2);
	while (x < (b - h))
	{
		s = s + h * (fx + fxh) / 2;
		x = x + h;
	}
	s = abs(s);
	cout << "Площадь равна = " << s;
}