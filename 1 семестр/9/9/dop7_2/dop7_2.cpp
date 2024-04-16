#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a = 5, b = 11, n = 200, x, s, h, fx, fxh, s1, s2, fa, fah, fb;
	h = (b - a) / (2 * n); x = a + 2 * h; s1 = 0; s2 = 0;
	for (int i = 1; i < n; i++)
	{
		s2 = s2 + (exp(x) + 2); x = x + h;
		s1 = s1 + (exp(x) + 2); x = x + h;
	}
	s = h / 3 * ((exp(a) + 2) + 4 * (exp(a + h) + 2) + 4 * s1 + 2 * s2 + (exp(b) + 2));
	cout << "Площадь равна = " << s;
}