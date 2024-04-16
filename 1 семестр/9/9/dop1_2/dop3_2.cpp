#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a = 1, b = 6, n = 400, x, s, h, fx, fxh, s1, s2, fa, fah, fb;
	h = (b - a) / (2 * n); x = a + 2 * h; s1 = 0; s2 = 0;
	fx = pow(x, 3) + 1;
	fxh = pow(x + h, 3) + 1;
	for (int i = 1; i < n; i++)
	{
		s2 = s2 + (pow(x, 3) + 1); x = x + h;
		s1 = s1 + (pow(x, 3) + 1); x = x + h;
	}
	s = h / 3 * ((pow(a, 3) + 1) + 4 * (pow(a + h, 3) + 1) + 4 * s1 + 2 * s2 + (pow(b, 3) + 1));
	cout << "Площадь равна = " << s;
}