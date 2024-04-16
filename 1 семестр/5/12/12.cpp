#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int n, a, b;
	cout << "Введите двухзначное число "; cin >> n;
	a = n / 10;
	b = n % 10;
	if (a == 1 or a == 9 or b == 1 or b == 9)
		cout << "Есть";
	else
		cout << "Нет";
}