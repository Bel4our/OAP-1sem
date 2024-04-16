#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int n=0,m=0,k=0, a;
	int* A = new int[n];
	int* B = new int[k];
	int* C = new int[m];
	cout << "¬ведите размерность первого массива: "; cin >> n;
	cout << "¬ведите размерность второго массива: "; cin >> k;
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
	if (n < k)
	{
		a = k;
	}
	else
	{
		a = n;
	}
	cout << endl;
	for (int i = 0; i < a;i++)
	{
		*(C + i) = (*(A + i)) + (*(B + i));
		cout << *(C + i)<<" ";
	}
}