#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 5;
	int A[n][n], B[25], j = 0, transp1, transp2, m, prov, f = 0, v = 0;
	m = 25;
	srand(time(0));
	for (int i = 0;i < n;i++)
	{
		for (int k = 0;k < n;k++)
		{
			A[i][k] = rand() % 100;
			B[j] = A[i][k];
			j++;
			cout << A[i][k] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	sort(B, B + 25);
	for (j = 0; j < m;j++)
	{
		cout << B[j] << " ";
	}
	cout << "\n";
	for (int z = 0; z < n;z++)
	{
		int max = INT_MIN;
		transp1 = 0;
		transp2 = 0;
		prov = 0;
		for (int j = 0;j < m;j++)
		{

			if (B[j] >= max)
			{
				max = B[j];
				prov = j;
			}
		}
		for (int l = prov;l < m;l++)
		{
			B[prov] = B[prov + 1];
		}
		m--;


		for (int i = 0;i < n;i++)
		{
			for (int k = 0;k < n;k++)
			{
				if (A[i][k] == max)
				{
					transp1 = i;
					transp2 = k;
				}
			}
			
		}
		swap(A[transp1][transp2],A[f][v]);
		f++;
		v++;
	}


	cout << "\n";
	for (int i = 0;i < n;i++)
	{
		for (int k = 0;k < n;k++)
		{
			cout << A[i][k] << " ";
		}
		cout << "\n";
	}
}