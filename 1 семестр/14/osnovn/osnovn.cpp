#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
    const int n = 5, m = 5;
	int B[n][m], mul = 1;
    bool f = true;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            B[i][k] = rand() % 100-50;
            cout << B[i][k] <<' ';
            if (B[i][k] % 2 == 0 && B[i][k]>0)
            {
                mul *= B[i][k];
                cout << B[i][k] << " ";
               
            }
        }
        cout << '\n';
    }
    cout << "Произведение = " << mul << endl;
}