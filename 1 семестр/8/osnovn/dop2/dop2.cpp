#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, x, last=0;
	cout << "������� ���������� ����� � ������������������ "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "������� " << i << "-�� �����: "; cin >> x;
		if (x < 0)
			last = i;
	}
		cout << last;
}