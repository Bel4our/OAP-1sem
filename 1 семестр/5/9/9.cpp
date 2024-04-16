#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int A, B;
	cout << "Введите числитель "; cin >> A;
	cout << "Введите знаменатель "; cin >> B;
	if (A > B)
		cout << "Дробь неправильная";
	else
		cout << "Дробь правильная";

}