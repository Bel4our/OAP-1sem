#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float r, p, q, otv, a, sh, pol, s, rvp;
	cout << "Введите радиус шара ";
	cin >> r;
	cout << "Введите диагонали ромба ";
	cin >> p >> q;
	a = sqrt(p * p + q * q) / 2;
	pol = 4 * a / 2;
	s = 0.5 * p * q;
	rvp = s / pol;
	otv = rvp * rvp * M_PI;
	sh = M_PI * r * r;
	if (otv >= sh)
		cout << "Шар пройдёт";
	else
		cout << "ШАР НЕ ПРОЙДЁТ!";

}