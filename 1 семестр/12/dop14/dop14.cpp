#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int const max = 50;
	int n, i=0, j=0, val=0;
	cout << "������� ����������� ��������(�� ����� 50) "; cin >> n;
	int x[max], y[max];
	for (int i = 0; i < n;i++)
	{
		cout << "������� "<<i+1<<" ������� �������: "; cin >> (*(x + i));
	}
	cout << endl;
	for (int j = 0; j < n;j++)
	{
		cout << "������� " << j + 1 << " ������� �������: "; cin >> (*(y + j));
	}
	for (int i = 0;i < n;i++)
	{
		if (*(x + i) == (*(y + j)))
		{
			val++;
		}
		j++;
	}
	cout << "\n���������� ��� = " << val;
}