#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char tmp[33];
	cout << "Введите целое число ";
	cin >> A;
	if (A > 0xFF)
		cout << "Вы ввели число у которого больше 8 бит";
	else 
	{
		_itoa_s(A, tmp, 2);
		cout << " Число А: " << tmp << endl;
		_itoa_s(0x7E, tmp, 2);
		cout << " Маска для А: " << tmp << endl;
		_itoa_s((A & 0x7E) >> 1, tmp, 2);
		cout << " Результат: " << tmp << endl << endl;
	}
}
