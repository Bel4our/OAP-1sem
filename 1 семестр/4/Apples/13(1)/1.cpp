#include<iostream>
#include<iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel;
	probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(21) << setfill(c) << c << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(21) << setfill(c) << c << endl;
	cout << setw(49) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << c << endl;
	cout << setw(51) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(53) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;

}