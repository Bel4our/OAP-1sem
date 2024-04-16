#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int k, n;
	cout << "Введите число k: ";
	cin >> k;
	cout << "Введите размер массива: ";
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++) 
	{		
			cout << "Введите " << i + 1 << " элемент массива: "; cin >> *(A + i);
	}
	cout << "Исходный массив: ";
	for (int i = 0; i < n; i++) {
		cout << *(A + i) << ' ';
	}
	cout << endl;
	cout << "Номера элементов, которые равны k: ";
	for (int i = 0; i < n; i++) {
		if (*(A + i) == k)
			cout << i + 1 << ' ';
	}
	cout << endl;
	cout << "Номера элементов, которые больше k: ";
	for (int i = 0; i < n; i++) {
		if (*(A + i) > k)
			cout << i + 1 << ' ';
	}
	cout << endl;
	cout << "Номера элементов, которые меньше k: ";
	for (int i = 0; i < n; i++) {
		if (*(A + i) < k)
			cout << i + 1 << ' '; 
	}
	cout << endl;
	delete[] A;
	return 0;
}