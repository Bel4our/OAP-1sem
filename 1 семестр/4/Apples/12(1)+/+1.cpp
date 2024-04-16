#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите символ ");
	char c;
	scanf("%c", &c);
	printf("\n%11c%c%c", c, c, c);
	printf("\n%11c%c%c", c, c, c);
	printf("\n%11c%c%c", c, c, c);
	printf("\n%11c%c%c", c, c, c);
	printf("\n%11c%c%c", c, c, c);
	printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\n%11c%c%c", c, c, c);
	printf("\n%11c%c%c", c, c, c);
	printf("\n%11c%c%c", c, c, c);
	printf("\n%11c%c%c", c, c, c);
	printf("\n%11c%c%c", c, c, c);


}