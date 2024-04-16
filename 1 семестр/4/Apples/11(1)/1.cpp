#include <iostream>
#include <iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel;
	probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(55) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(55) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(55) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(55) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(55) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
}