#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	const int max = 100;
	int a[max], last = 0, first = 0, k = 0;
	srand(time(0));

	for (int i = 0; i < max; i++)
	{
		a[i] = rand() % 10;
		if (k <= 0)
		{
			if (a[i] == 0)
			{
				first = i;
				k++;
			}
		}
		cout << i << "элемент массива:" << a[i] << endl;
			if (a[i] == 0)
				last = i;
	}
	cout << first << "       " << last;
}