#include <iostream>
int main()
{
	using namespace std;
		setlocale(LC_CTYPE, "Russian");
	int n, k, x;
	cout << "Количество школьников="; cin >> n;

	cout << "Количество яблок=";cin >> k;
	x = k / n;
	cout << x;


}