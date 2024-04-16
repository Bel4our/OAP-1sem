#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	int n,sum=0;
	for (n = 0; n < 150; n = n + 5)
	{
		sum += n;
	}
	cout << "Ñóììà = " << sum;

}