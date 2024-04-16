#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int a, b, c, sum;
	cout << "¬ведите числа "; cin >> a >> b >> c;
	sum = (a % 5 == 0 ? a : 0) + (b % 5 == 0 ? b : 0) + (c % 5 == 0 ? c : 0);
	sum == 0 ? cout << "Error" : cout << sum;
}