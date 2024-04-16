#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, x, s;
	double  e = 0.0001;
	cout << "¬ведите a: "; cin >> a;
	cout << "¬ведите b: "; cin >> b;

	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if ((pow(x,3) + 3 * x -1) * (pow(a, 3) + 3 * a - 1) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << x;
}