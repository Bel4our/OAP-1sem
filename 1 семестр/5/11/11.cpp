#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int k;
	printf("������� ����� �� 1 �� 9: ");scanf("%d",&k);
	if (k == 1)
		printf("��� %d ���", k);
	else
		if (k>1 and k<5)
			printf("��� %d ����", k);
		else
			if (k>6 and k<10)
				printf("��� %d ���", k);
			else
				printf("�� ����� ������������ �����");
}