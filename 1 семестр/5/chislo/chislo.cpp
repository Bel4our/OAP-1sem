#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int k, sum;
	puts("Введите трёхзначное число ");
	cin >> k;
	sum = (k / 100) + ((k % 100) / 10) + (k % 10);
	if ( sum % 3 == 0)
		puts("Число делиться на 3");
	else
		puts("Число не делиться на 3");
}