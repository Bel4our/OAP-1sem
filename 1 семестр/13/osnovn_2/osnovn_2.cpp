#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int k, d, i = 0, j = 0;
	bool f = true;
	char pstr[200];
	char* str;
	str = &pstr[0];
	cout << "¬ведите текст: "; gets_s(pstr);
	d = strlen(pstr);
	cout << "¬ведите число k: "; cin >> k;
	//char* str1 = new char[k - 1];
	//char* str2 = new char[d - k - 1];
	while (f)
	{
		if (*(str + k-1) == ' ')
		{
			f = false;
		}
		else
		{
			k--;
			if (k < 1)
			{
				f = false;
			}
		}
	} 

	for (i = 0;i < d;i++)
	{
		if (i == k - 1)
		{
			cout << "\n";
			i++;
		}
		cout << *(str+i);
	}
	

}