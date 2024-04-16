#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int  n, i, k, maxval, minval;
	int const max = 100;
	cout << "Введите размерность первого массива(не более 100): "; cin >> n;
	if (n > 100)
		cout << "Вы ввели неправильное значение";
	else
	{
		cout << "Введите размерность второго массива(не более 100): "; cin >> k;
		if (k > 100)
			cout << "Вы ввели неправильное значение";
		else
		{
			double A[max], B[max], C[max];
			srand(time(0));
			for (int i = 0; i < n;i++)
			{
				*(A + i) = rand() % 99;
				cout << *(A + i) << " ";
			}
			cout << endl;
			for (int i = 0; i < k;i++)
			{
				*(B + i) = rand() % 99;
				cout << *(B + i) << " ";
			}
			cout << endl;
			if (n >= k)
			{
				maxval = n;
				minval = k;
			}
			else
			{
				minval = n;
				maxval = k;
			}
			for (int i = 0; i < minval;i++)
			{
				*(C + i) = *(A + i) + (*(B + i));
				cout << *(C + i) << " ";
			}
			for (int i = minval; i < maxval;i++)
			{
				if(*(A + i)>(*(B + i)))
				*(C + i) = *(A + i);
				else
					*(C + i) = *(B+ i);
				cout << *(C + i) << " ";
			}
		}
	}
}