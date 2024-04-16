#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, *arr, sum=0,mul=1, max=INT_MIN, min=INT_MAX, maxval, minval;
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
	}
	for (int i = 0;i < n;i++)
	{
		if (*(arr + i) > 0)
		{
			sum += *(arr + i);
		}
		if (abs(*(arr + i)) > max)
		{
			max = abs(*(arr + i));
			maxval = i;
		}
		else
		{
			if (abs(*(arr + i)) < min)
			{
				min = abs(*(arr + i));
				minval = i;
			}
		}
	}
	cout << "\n";
	if (maxval > minval)
	{
		for (int i =minval+1;i < maxval;i++)
		{
			mul *= *(arr + i);
		}
	}
	else
	{
		for (int i = maxval+1;i < minval;i++)
		{
			mul *= *(arr + i);
		}
	}
	cout << "Сумма = " << sum<<endl; 
	cout << "Произведение = "<<mul;
}