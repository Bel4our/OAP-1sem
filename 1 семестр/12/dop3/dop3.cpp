#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n,t,val1=0,val2=0;
	cout << "������� ����������� �������: "; cin >> n;
	int* A = new int[n];
	int* B = new int[n];
	cout << "������� ����� t: "; cin >> t;
	for (int i = 0; i < n;i++)
	{
		cout << "������� " << i + 1 << " ������� �������: "; cin >> *(A + i);
		if (*(A + i) < t)
		{
			val1++;
		}
	}
	cout << endl;
	for (int i = 0; i < n;i++)
	{
		cout << "������� " << i + 1 << " ������� �������: "; cin >> *(B + i);
		if (*(B + i) < t)
		{
			val2++;
		}
	}
	if (val1 > val2)
	{
		cout << "������ A: ";
		for (int i = 0;i < n;i++)
		{
			cout << *(A + i)<<" ";
		}
		cout << endl;
		cout << "� ������� � ����������� ��������� ������ t: " << val1;
		cout << endl<<"������ B: ";
		for (int i = 0;i < n;i++)
		{
			cout << *(B + i) << " ";
		}
		cout << endl;
		cout << "� ������� B ���������� ��������� ������ t: " << val2;
	}
	else {
		cout << "������ B: ";
		for (int i = 0;i < n;i++)
		{
			cout << *(B + i) << " ";
		}
		cout << endl;
		cout << "� ������� B ���������� ��������� ������ t: " << val2;
		cout << endl << "������ A: ";
		for (int i = 0;i < n;i++)
		{
			cout << *(A + i) << " ";
		}
		cout << endl;
		cout << "� ������� A ���������� ��������� ������ t: " << val1;
	}

}