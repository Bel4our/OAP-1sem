#include <iostream>
#include<iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double s, osn, h;
	    //s = 2 * h * h;
		//p = 6 * h;
		//s = p;
		//2 * h * h = 6 * h;
		//h = (6*h)/2*h;
	h = 3;
	osn = 2 * h;
	s = 6 * h;
	cout << "Основание = " << osn << "; ";
	cout << "Площадь = " << s;


}