#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int k;
	puts("����� ������� ������ ? (1 - ��� �����, 2 - ��������, 3 - � �� ����)"); 
	cin >> k;
	switch (k)
	{
	case 1: { puts("� ���� ���� ���� � ���� ���� ������ ���� ��� ���? (1-��,�������, 2-� ���� ��� �����, 3-����, �� � �� ����� ���� ��� ����)");
		cin >> k;
		switch (k)
		{
		case 1: puts("������� �������!"); break;
		case 2: puts("����"); break;
		case 3: puts("����� ����"); break;
		default: puts("������������ �������");
		}
		break;
	          }
	
	case 2:  puts("�������� �������");
		break;
		
	case 3: puts("����� ����"); break;
	default: puts("������������ �������");
		break;
	}
	return 0;
}