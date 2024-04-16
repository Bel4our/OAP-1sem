#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int** A = new int*[4];
	int sum = 0;
	for (int i = 0;i < 4;i++)
	{
		A[i] = new int[4];
	}
	srand(time(0));
	for (int i = 0;i < 4;i++)
	{
		int max = INT_MIN, min=INT_MAX;
		for (int j = 0;j < 4;j++)
		{
			A[i][j] = rand() % 100 - 20;
			cout << A[i][j] << " ";
			if ((i+1) % 2 == 0)
			{
				if (A[i][j] > max)
				{
					max = A[i][j];
				}
			}
			else
			{
				if (A[i][j] < min)
				{
					min = A[i][j];
				}
			}
		}
		if ((i+1) % 2 == 0)
		{
			sum += max;
		}
		else
		{
			sum += min;
		}
		cout << "\n";
	}
	cout << "\n" << sum;
	for (int k = 0; k < 4; k++)
		delete[] A[k];
	delete[] A;
}