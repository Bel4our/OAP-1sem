#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A;
	cout << "������� ����� ����� ";
	cin >> A;

	_itoa_s(A, tmp, 2);
	cout << " ����� �: " << tmp << endl;

	_itoa_s(0x28, tmp, 2);
	cout << " ����� ��� �: " << tmp << endl;

	_itoa_s((A | (0x18)), tmp, 2);
	cout << " ���������: " << tmp << endl << endl;
}