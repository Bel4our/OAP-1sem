#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a = 8, b = 12, n = 200, x, s, h, fx, fxh, s1, s2, fa, fah, fb;
	h = (b - a) / (2 * n); x = a + 2 * h; s1 = 0; s2 = 0;
	fa = 5 - pow(a, 2);
	fah = 5 - pow(a + h, 2) ;
	fb = 5 - pow(b, 2) ;
	fx = 5 - pow(x, 2) ;
	fxh = 5 - pow(x + h, 2) ;
	for (int i = 1; i < n; i++)
	{
		s2 = s2 + fx; x = x + h;
		s1 = s1 + fx; x = x + h;
	}
	s = h / 3 * (fa + 4 * fah + 4 * s1 + 2 * s2 + fb);
	s = abs(s);
	cout << "Площадь равна = " << s;
}