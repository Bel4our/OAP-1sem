#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int k, n;
	cout << "������� ����� k: ";
	cin >> k;
	cout << "������� ������ �������: ";
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++) 
	{		
			cout << "������� " << i + 1 << " ������� �������: "; cin >> *(A + i);
	}
	cout << "�������� ������: ";
	for (int i = 0; i < n; i++) {
		cout << *(A + i) << ' ';
	}
	cout << endl;
	cout << "������ ���������, ������� ����� k: ";
	for (int i = 0; i < n; i++) {
		if (*(A + i) == k)
			cout << i + 1 << ' ';
	}
	cout << endl;
	cout << "������ ���������, ������� ������ k: ";
	for (int i = 0; i < n; i++) {
		if (*(A + i) > k)
			cout << i + 1 << ' ';
	}
	cout << endl;
	cout << "������ ���������, ������� ������ k: ";
	for (int i = 0; i < n; i++) {
		if (*(A + i) < k)
			cout << i + 1 << ' '; 
	}
	cout << endl;
	delete[] A;
	return 0;
}