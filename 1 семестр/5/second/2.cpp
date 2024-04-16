#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n, m, k;
	cout << "Введите 3 числа ";
	cin >> n >> m >> k;
	if (n % 2 == 1 || m % 2 == 1 || k % 2 == 1)
		cout << "Нечётные числа есть";
	else
		cout << "Нечётных чисел нету";

}