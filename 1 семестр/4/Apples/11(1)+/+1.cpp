#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("¬ведите сивол: ");
	char c;
	scanf("%c", &c);
	printf("\n%40c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\n%40c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\n%40c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\n%40c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\n%40c%c%c%c%c%c%c%c%c%c%c%c", c, c, c, c, c, c, c, c, c, c, c, c);
	printf("\n%40c%c%c%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c, c, c, c);
	

}