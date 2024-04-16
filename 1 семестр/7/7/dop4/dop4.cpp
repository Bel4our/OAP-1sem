#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int number = 1000, a, b, c, d;
	while (number <= 9999)
	{
		if (number % 2 == 0 and number % 7 == 0 and number % 11 == 0)
		{
			a = number / 1000;
			b = (number / 100) % 10;
			c = (number / 10) % 10;
			d = number % 10;
			if ((a == b and c == d and a != c or a == c and b == d and a != b or a == d and b == c and a != b) and (a + b + c + d == 30))
			{
				cout << number;
				break;
			}
			else
				number++;
		}
		else
			number++;
	}
}