#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, a, b, c, ch;
	printf("Введите трёхзначное число ");
	scanf("\n%d", &n);
	a = n % 10;
	b = (n / 10) % 10;
	c = n / 100;
	ch = a * 100 + b * 10 + c;
	printf("Реверсированное число = %d", ch);
}