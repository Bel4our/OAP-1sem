#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int a, b, p, q, r, s;
	cout << "Введите длину и ширину участка "; cin >> a >> b;
	cout << "Введите длину и ширину первого дома "; cin >> p >> q;
	cout << "Введите длину и ширину другого дома "; cin >> r >> s;
	if (p + r <= a and q <= b and s <= b)
		cout << "Дома можно разместить";
	else
		if (q + r <= a and p <= b and s <= b)
			cout << "Дома можно построить";
		else
			if (q + s <= a and p <= b and r <= b)
				cout << "Дома можно построить";
			else
				cout << "Дома нельзя разместить";
}