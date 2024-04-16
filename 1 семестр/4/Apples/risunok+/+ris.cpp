#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	printf("Введите символ: \n");
	char c;
	scanf("%c", &c);
	
	printf("%20c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	
	printf("%18c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	
	printf("%16c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	
	printf("%16c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);

	printf("%16c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
	
	printf("%18c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);

	printf("%20c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);



}