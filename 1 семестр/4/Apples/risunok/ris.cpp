#include <iomanip>
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel;
	probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << c << endl;
	cout << setw(46) << setfill(probel) << probel;
	cout << setw(23) << setfill(c) << c << endl;
	cout << setw(44) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;
	cout << setw(44) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;
	cout << setw(44) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;
	cout << setw(46) << setfill(probel) << probel;
	cout << setw(23) << setfill(c) << c << endl;
	cout << setw(48) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << c << endl;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;




}


