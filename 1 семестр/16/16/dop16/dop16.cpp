#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int N, max=INT_MIN, count=0;
	cout << "¬ведите количество чисел: "; cin >> N;
	int* A = new int[N];
	srand(time(0));
	for (int i = 0;i < N;i++)
	{
		A[i] = rand() % 20;
		cout << A[i] << " ";
	}
	for (int i = 0;i < N;i++)
	{

		if (A[i] > max)
		{
			max = A[i];
		}
	}
	for (int i = 0;i < N;i++)
	{
		if (A[i] == max)
		{
			count++;
		}
	}
	cout << endl<< count;
}