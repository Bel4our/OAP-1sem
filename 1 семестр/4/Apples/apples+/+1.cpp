#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int x, n, k;
	
	printf("\n\t ������� ���������� ����� \n");
	scanf("%d", &k);
	printf("\n\t ������� ���������� ���������� \n");
	scanf("%d", &n);
	x = k / n;
	printf("\n������ ������� �� %d �����",x);
    
	
	
}