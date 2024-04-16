#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double  n = 0.6, y, z, l, a = 1.055, x = 0.6;
	y = pow(cos(pow(x, 2)), 2) / abs(x);
	while (n <= 14)
	{
		l = a * x * n;
		if (y < l)
			z = abs(y);
		else
			z = sqrt(1 + exp(-1 * y));
		cout << "y = " << y << endl;
		cout << "z = " << z << endl;
		cout << n << endl;
		n += 2;
	}
			
		

	
}