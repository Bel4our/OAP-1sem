#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, x, sum=0;
	cout << "¬ведите количество чисел в последовательности "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "¬ведите " << i << "-ое число: "; cin >> x;
		if (x % 2 == 0)
			sum += x;
	}
	cout << sum;
}