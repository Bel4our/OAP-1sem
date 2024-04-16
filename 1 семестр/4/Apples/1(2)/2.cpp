#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double d, s, a;
	cout << "¬ведите число "; cin >> d;
	a = d / sqrt(2);
	s = a * a;
	cout << "ѕлощадь = " << s;

}