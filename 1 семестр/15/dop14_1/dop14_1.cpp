#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, * arr, c, mul = 1, max = INT_MIN, value = 0, maxval;
	cout << "Введите размерность массива: "; cin >> n;
	cout << "Введите число С: "; cin >> c;
	if (!(arr = (int*)malloc(n * sizeof(int))))
	{
		puts("Не достаточно памяти");
		return(0);
	}
	srand(time(0));
	for (int i = 0;i < n;i++)
	{
		*(arr + i) = rand() % 20;
		cout << *(arr + i) << " ";
	}
	for (int i = 0;i < n;i++)
	{
		if (*(arr + i) > c)
		{
			value++;
		}
		if (abs(*(arr + i)) > max)
		{
			max = abs(*(arr + i));
			maxval = i;
		}
	
	}
	cout << "\n";

		for (int i = maxval+1;i<n;i++)
		{
			mul *= *(arr + i);
		}
	
	cout << "Количество = " << value << endl;
	cout << "Произведение = " << mul;
}