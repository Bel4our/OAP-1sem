#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int  n, val=0;
	int const max = 100;
	cout << "Введите размерность массива(не более 100): "; cin >> n;
	if (n > 100)
		cout << "Вы ввели неправильное значение";
	else
	{
		double mas[max];
			srand(time(0));
		for (int i = 0; i < n;i++)
		{
			mas[i] = rand() % 99;
			cout << mas[i] << " ";
		}
		
		for (int i = 0; i < n; i++)
		{
			if (mas[i] == (mas[n - 1] + mas[n - 2] + mas[n - 3]) / 3)
			{
				cout << "\n Число = " << mas[i] << endl;
				val += 1;
			}
		}
		if (val == 0)
			cout << "\nТакого числа нет :(";
	}
}