#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 10;
	int A[n][n], B[100], j = 0, transp, m, prov,f=0,v=0;
	m = 100;
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
	sort(B, B + 100);
	for (j = 0; j<m;j++)
	{
		cout << B[j]<<" ";
	}
	
	for (int z = 0; z < n;z++)
	{
		int max = INT_MIN;
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
		A[f][v] = max;
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