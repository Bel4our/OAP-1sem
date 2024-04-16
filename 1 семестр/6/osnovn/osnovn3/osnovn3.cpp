#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	float s, f, k, v, m, y;

	s = 7.4;
	f = 3.2e4;

	for (int n = 0; n < 3;n++)
	{
		cout << "¬ведите k "; cin >> k;
		m = 0.3;
		while (m < 0.8){
			y = s / log(5.2 * f) / (exp(-5) + 2);
			v = (1 + (m * y) - (m * k)) / log(y);
			cout << "y = " << y;
			cout << "\nv = " << v << "\n";
			m = m + 0.1;
		} 
		
	}
}