#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n;
	float  a, b, c, ch;
	cout << "¬ведите трЄхзначное число ", cin >> n;
	a = n % 10;
	b = (n / 10) % 10;
	c = n / 100;
	ch = a * 100 + b * 10 + c;
	cout << ch;
	


}