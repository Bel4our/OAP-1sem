#include <iostream>
#include <cmath>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double n, s=0, p, sum, cen;
	sum = 0;
	cen = 0;
	cout << "Введите процент уценки "; cin >> p;
	cout << "Введите количество лет "; cin >> n;
	for (int i = 0; i <n; i++)
	{
		cout << "Введите цену оборудования ";
		cen *= (1 - (p / 100));
		cin >> s;
		cen = cen + s;
	}
	cout << "Общая стоимость накопленного оборудования за " << n << " лет равна " << cen << " рублей." << endl;

}