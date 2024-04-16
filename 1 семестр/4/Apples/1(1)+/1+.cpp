#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите символ: ");
	char c;
	scanf("%c", &c);
	printf("\n%29c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\n%29c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\n%30c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c );
	printf("\n%31c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\n%32c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\n%34c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c );
	printf("\n%36c%c%c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);


}