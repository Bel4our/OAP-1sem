#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
int main()
{
	int d;
	float a,s;
	setlocale(LC_CTYPE, "Russian");
	printf("¬ведите диагональ ");
	scanf("\n%d", &d);
	a = d / sqrt(2);
	s = a * a;
	printf("ѕлощадь равна = %f", s);


}