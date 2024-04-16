#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, * arr, sum = 0, mul = 1, min = INT_MAX, minval;
	cout << "Введите размерность массива: "; cin >> n;
	if (!(arr = (int*)malloc(n * sizeof(int))))
	{
		puts("Не достаточно памяти");
		return(0);
	}
	srand(time(0));
	for (int i = 0;i < n;i++)
	{
		*(arr + i) = rand() % 40 - 20;
		cout << *(arr + i) << " ";
		if (*(arr + i) < min)
		{
			min = *(arr + i);
			minval = i;
		}
	}
	for (int i = 0;i < minval;i++)
	{
		if (*(arr + i) > 0)
		{
			mul *= *(arr + i);
		}
		sum += *(arr + i);
	}
	cout << "\n" << "Сумма = " << sum << endl;
	cout << "Произведение = " << mul;
}