#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int N,c,k, i=0;
    int* A = new int[10];

    cout << "¬ведите число N: "; cin>> N;
    cout << "¬ведите число k: "; cin>> k;
    while (N > 0)
    {
        c = N % 10;
        N = N / 10;
        if (c % k == 0)
        {
            *(A+i) = c;
            i++;
        }
    }
    for (int j = 0;j < i;j++)
    {
        cout << *(A + j)<<" ";
    }
}
