#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	unsigned A, p, n ;
	cout << "������� ����� ����� ";
	cin >> A;
	cout << "������� ������� ";
	cin >> p;
	cout << "������� ���������� ������������� ����� ";
	cin >> n;
	char tmp[33];
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	unsigned mask = (1 << n) - 1; 
	mask <<= p;                    
	_itoa_s(mask, tmp, 2);
	cout << tmp << endl;
	_itoa_s(A ^= mask, tmp, 2);
	cout << tmp << endl;
}