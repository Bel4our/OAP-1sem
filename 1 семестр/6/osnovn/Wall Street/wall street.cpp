#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	float P, Q, V, n;
	n = 1;
	cout << "Введите количесвто заработка "; cin >> P;
	cout << "Введите значение "; cin >> Q;
	while (P<Q)
	{
		P = 1.03 * P;
		n = n + 1;
	}
	cout << "Выручка составила " << P << " в " << n << " день";
}