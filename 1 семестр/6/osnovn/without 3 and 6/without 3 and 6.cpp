#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
    int k=0,n,i=0;
 
    cout << "¬ведите любое целое число: ";
    cin >> n;
    while (n != 0) {
        if (n % 10 != 3 && n % 10 != 6 && n%10 != -3 && n%10 !=-6) 
        {
           k += n%10 * pow(10, i);
           i++ ;
        }
        n /= 10;
    }
	cout << k;

}