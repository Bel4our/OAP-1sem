#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int i, j, n, x1, x2, k=0, min = INT_MAX;
    int const max = 100;
    float a[max], b[max], s;
    cout << "¬ведите размер первого массива: ";
    cin >> x1;
    cout << "¬ведите размер второго массива: ";
    cin >> x2;
    srand(time(0));
    for (int i = 0; i < x1;i++)
    {
        *(a + i) = rand() % 99;
        cout << *(a + i) << " ";
    }
    cout << endl;
    for (int j = 0; j < x2;j++)
    {
        *(b + j) = rand() % 99;
        cout << *(b + j) << " ";
    }
    for (int i = 0; i < x1; i++)
    {
        k = 0;
        for (int j = 0; j < x2; j++)
        {
            if (*(a + i) != (*(b + j)))
            {
                k++;
            }
        }
        if (k == x2 && (*(a + i)<min))
        {
            min= (*(a + i));
        }
    }
    cout <<endl << min;
}