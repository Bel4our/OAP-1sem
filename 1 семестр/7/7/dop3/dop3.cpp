#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double c1, c2, n = 0;
	cout << "������� ���������� ���� � ������ ������ "; cin >> c1;
	cout << "������� ���������� ���� �� ������ ������ "; cin >> c2;
	while (n < 5)
	{
		c1 = c1 / 2;
		c2 = c2 + c1;
		c2 = c2 / 2;
		c1 = c1 + c2;
		n++;
	}
	cout << "� ������ ������ " << c1 << " ������ ����\n" << "�� ������ ������ " << c2 << " ������ ����";
}