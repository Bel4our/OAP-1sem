#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float a, b, c, d, x1, x2;
	cout << "Введите значения a, b, c: ";
	cin >> a >> b >> c;
	d = b * b - (4 * a * c);
	if (d < 0)
		cout << "Корней нет";
	else {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "x1= " << x1 << " x2= " << x2;
	}
}