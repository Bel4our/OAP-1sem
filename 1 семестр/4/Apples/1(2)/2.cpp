#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double d, s, a;
	cout << "������� ����� "; cin >> d;
	a = d / sqrt(2);
	s = a * a;
	cout << "������� = " << s;

}