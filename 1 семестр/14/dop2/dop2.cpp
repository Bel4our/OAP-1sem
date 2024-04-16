#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int n=50;
	int k;
	int A[n][n];
	cout << "Введите порядок(не более 50): ";
	cin >> k;
	if (k > 50)
	{
		cout << "Вы ввели неверное значение(";
	}
	else
	{
		for (int i = 0; i < k; i++)
		{
			int a = i + 1;
			for (int j = 0; j < k; j++)
			{
				A[i][j] = a;
				a++;
				if (a > k)
					a = 1;
			}
		}
		for (int i = 0; i < k; i++)
		{
			for (int j = 0; j < k; j++)
				cout << A[i][j] << ' ';
			cout << endl;
		}
	}
}