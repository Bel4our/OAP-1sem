#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int s, osn, h, p;
	//s = 2 * h * h;
	//p = 6 * h;
	//s = p;
	//2 * h * h = 6 * h;
	//h = (6*h)/2*h;
	h = 3;
	osn = 2 * h;
	s = 6 * h;
	printf("Основание = %d ", osn);
	printf("Площадь = %d", s);
}
