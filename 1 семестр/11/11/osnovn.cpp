#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char tmp[33];
	cout << "������� ����� ����� ";
	cin >> A;
	if (A > 0xFF)
		cout << "�� ����� ����� � �������� ������ 8 ���";
	else 
	{
		_itoa_s(A, tmp, 2);
		cout << " ����� �: " << tmp << endl;
		_itoa_s(0x7E, tmp, 2);
		cout << " ����� ��� �: " << tmp << endl;
		_itoa_s((A & 0x7E) >> 1, tmp, 2);
		cout << " ���������: " << tmp << endl << endl;
	}
}
