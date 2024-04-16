#include <iostream>
#include <iomanip>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	char c, probel;
	probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(60) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(60) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(60) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(54) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(54) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(60) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(60) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(60) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;

}
