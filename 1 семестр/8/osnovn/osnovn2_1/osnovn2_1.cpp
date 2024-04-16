#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, x, max = 0, y, k, sum=0, i1;
	for (int i = 1; i <= 5; i++)
	{
		cout << "¬ведите x: "; cin >> x;
		sum += x;
	}
	for (i1 = 1; i1 <= 3; i1++)
	{
		cout << "¬ведите a: "; cin >> a;
		y = a + sum;
		if (y > max)
		{
			max = y;
		}
	}
	k = max;
	cout << "k = " << k;
}