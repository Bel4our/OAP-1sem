#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a = 4, b = 8, n = 200, x, s, h, fx, fxh, s1 ,s2, fa, fah, fb;
	h = (b - a) / (2 * n); x = a + 2 * h; s1 = 0; s2 = 0;
	fa = pow(a, 2) - 4;
	fah = pow(a+h, 2) - 4;
	fb = pow(b, 2) - 4;
	fx = pow(x, 2) - 4;
	fxh = pow(x + h, 2) - 4;
	for(int i=1; i<n; i++)
	{
		s2 = s2 + fx; x = x + h;
		s1 = s1 + fx; x = x + h;
	}
	s = h / 3 * (fa + 4 * fah + 4 * s1 + 2 * s2 + fb);
	cout << "Площадь равна = " << s;
}