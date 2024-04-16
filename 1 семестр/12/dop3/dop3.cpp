#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n,t,val1=0,val2=0;
	cout << "Введите размерность массива: "; cin >> n;
	int* A = new int[n];
	int* B = new int[n];
	cout << "Введите число t: "; cin >> t;
	for (int i = 0; i < n;i++)
	{
		cout << "Введите " << i + 1 << " элемент массива: "; cin >> *(A + i);
		if (*(A + i) < t)
		{
			val1++;
		}
	}
	cout << endl;
	for (int i = 0; i < n;i++)
	{
		cout << "Введите " << i + 1 << " элемент массива: "; cin >> *(B + i);
		if (*(B + i) < t)
		{
			val2++;
		}
	}
	if (val1 > val2)
	{
		cout << "Массив A: ";
		for (int i = 0;i < n;i++)
		{
			cout << *(A + i)<<" ";
		}
		cout << endl;
		cout << "В массиве А количествоо элементов меньше t: " << val1;
		cout << endl<<"Массив B: ";
		for (int i = 0;i < n;i++)
		{
			cout << *(B + i) << " ";
		}
		cout << endl;
		cout << "В массиве B количество элементов меньше t: " << val2;
	}
	else {
		cout << "Массив B: ";
		for (int i = 0;i < n;i++)
		{
			cout << *(B + i) << " ";
		}
		cout << endl;
		cout << "В массиве B количество элементов меньше t: " << val2;
		cout << endl << "Массив A: ";
		for (int i = 0;i < n;i++)
		{
			cout << *(A + i) << " ";
		}
		cout << endl;
		cout << "В массиве A количество элементов меньше t: " << val1;
	}

}