#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    const int n = 10, m = 10;
    int B[n][m], sum = 0, row, dig = 0;
    bool f = true;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            *(*(B + i) + k) = rand() % 100-50;
            cout << B[i][k] << ' ';
            if (*(*(B + i) + k) == 0 and f)
            {
                row = i;
                dig = *(*(B + row) + 0);
                f = false;
            }
        }
        cout << "\n";
    }
    if (f == true)
    {
        cout << "0 нет";
    }
    else
    {
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k < m; k++)
            {
                *(*(B + i) + k) -= dig;
                cout << *(*(B + i) + k) << " ";
            }
            cout << "\n";
        }
    }
}