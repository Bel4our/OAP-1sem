#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	char str[200], end;
	int f,l,m=0;
	cout << "¬ведите строку: "; gets_s(str);
	f = strlen(str);
	cout << "¬ведите окончание: "; cin >>end;

	for (int i = 0; i < f; i++)
	{
		m++;
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (str[i - 1] == end)
			{
				int sizeword = m-1;
				for (int j = i - sizeword;j < i;j++)
				{
					cout << str[j];
				}
				cout << ' ';
			}
			m = 0;
		}
		else
		{

		}
	}
}