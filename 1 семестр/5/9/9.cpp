#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int A, B;
	cout << "������� ��������� "; cin >> A;
	cout << "������� ����������� "; cin >> B;
	if (A > B)
		cout << "����� ������������";
	else
		cout << "����� ����������";

}