#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, *arr, mul=1, sum=0, max=INT_MIN, maxval=0;
	cout << "Введите размерность массива: "; cin >> n;
		if (!(arr = (int*)malloc(n * sizeof(int))))
		{
			puts("Не достаточно памяти");
			return(0);
		}
	srand(time(0));
	for (int i = 0;i < n;i++)
	{
			*(arr + i) = rand() % 100 - 20;
			cout << *(arr + i) << " ";
	}
	for (int i = 0;i < n;i++)
	{
		if (*(arr + i) > max)
		{
			max = *(arr + i);
			maxval = i;
		}
	}
	for (int i = 0;i < maxval;i++)
	{
		if (*(arr + i) > 0)
		{
			sum += *(arr + i);
		}
		else
			if (*(arr + i) < 0)
			{
				mul *= *(arr + i);
			}
	}
	cout <<"\n" << "Сумма = " << sum << endl;
	cout << "Произведение = " << mul;
}