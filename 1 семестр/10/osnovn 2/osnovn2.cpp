#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int  k;
	int const max = 100;
	cout << "Введите размерность массива(не более 100): "; cin >> k;
	if (k > 100)
		cout << "Вы ввели неправильное значение";
	else
	{
		int mas[max];
		srand(time(0));
		for (int i = 0; i < k;i++)
		{
			mas[i] = rand() % 99;
			cout << mas[i] << " ";
		}
		for (int i = 0; i < k; i++)
		{
			int prov = 0;
			for (int j = 0; j < k; j++)
			{
				if (i != j && mas[i] == mas[j])
				{
					prov++;
					break;
				}
			}
			if (prov == 0)
			{
				cout << "\n Одно из чисел = " << mas[i] << endl;
			}
		}
	}
}
