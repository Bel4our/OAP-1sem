#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int a, b, p, q, r, s;
	cout << "������� ����� � ������ ������� "; cin >> a >> b;
	cout << "������� ����� � ������ ������� ���� "; cin >> p >> q;
	cout << "������� ����� � ������ ������� ���� "; cin >> r >> s;
	if (p + r <= a and q <= b and s <= b)
		cout << "���� ����� ����������";
	else
		if (q + r <= a and p <= b and s <= b)
			cout << "���� ����� ���������";
		else
			if (q + s <= a and p <= b and r <= b)
				cout << "���� ����� ���������";
			else
				cout << "���� ������ ����������";
}