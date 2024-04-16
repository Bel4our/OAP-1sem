#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int k;
	printf("Введите число от 1 до 9: ");scanf("%d",&k);
	if (k == 1)
		printf("Мне %d год", k);
	else
		if (k>1 and k<5)
			printf("Мне %d года", k);
		else
			if (k>6 and k<10)
				printf("Мне %d лет", k);
			else
				printf("Вы ввели неправильное число");
}