#include <iostream>
using namespace std;
int find(int*k)
{
	int* A = new int[*k];
	srand(time(0));
	for (int i = 0;i <* k;i++)
	{
		A[i] = rand() % 20;
		cout << A[i] << " ";
	}
	cout << endl << "Номера: ";
	for (int i = 0;i <*k;i++)
	{
		if (A[i] % 2 == 0 && (i + 1) % 2 == 1)
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите размерность массива: "; cin >> n;
	find(&n);
}