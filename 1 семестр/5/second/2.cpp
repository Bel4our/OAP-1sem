#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n, m, k;
	cout << "������� 3 ����� ";
	cin >> n >> m >> k;
	if (n % 2 == 1 || m % 2 == 1 || k % 2 == 1)
		cout << "�������� ����� ����";
	else
		cout << "�������� ����� ����";

}