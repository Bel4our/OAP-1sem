#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double c1, c2, n = 0;
	cout << "Введите количество воды в первом сосуде "; cin >> c1;
	cout << "Введите количество воды во втором сосуде "; cin >> c2;
	while (n < 5)
	{
		c1 = c1 / 2;
		c2 = c2 + c1;
		c2 = c2 / 2;
		c1 = c1 + c2;
		n++;
	}
	cout << "В первом сосуде " << c1 << " литров воды\n" << "Во втором сосуде " << c2 << " литров воды";
}