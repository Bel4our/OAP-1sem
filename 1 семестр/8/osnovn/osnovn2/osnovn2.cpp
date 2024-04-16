#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 1;
	double a, x, max=0,y, k, sum;
	for(i=1; i<=5; i++)
	{
			sum = 0;
			cout << "¬ведите a: "; cin >> a;
			cout << "¬ведите x: "; cin >> x;
			sum = 5 * x;
			y = a + sum;
			if (y > max)
				max = y;
	}
	k = max;
	cout << "k = " << k;
}