#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int k,buf, j;
	char str[100];
	cout << "Введите строку: "; gets_s(str);
	k = strlen(str);
	j = k;
	for (int i = 0;i <= (k / 2);i++)
	{
		buf = str[i];
		str[i] = str[j - 1];
		str[j - 1] = buf;
		j--;
	}
	cout << str;
}
