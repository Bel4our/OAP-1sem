#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Rus");
	double q=0, n=6, i=1, x, y, z;
	while (i <= n)
	{
		cout << "¬ведите x: "; cin >> x;
		cout << "¬ведите y: "; cin >> y;
		z = x * y;
		q += z;
		i++;
	}
	cout << "q = " << q;
}
