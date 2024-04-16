#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    float more = 0, min = 0, ravn = 0;
    cout << "¬ведите размерность первого массива: "; cin >> n;
    int* C = new int[n];
    int* B = new int[n];
    for (int k = 0;k < n;k++)
    {
        cout << "¬ведите " << k + 1 << " элемент массива: "; cin >> (*(C + k));
    }
    cout << endl;
    for (int k = 0; k < n;k++)
    {
        cout << "¬ведите " << k + 1 << " элемент массива: "; cin >> (*(B + k));
    }
    for (int k = 0;k < n;k++)
    {
        if (*(C + k) < (*(B + k)))
        {
            min++;
        }
        else {
            if (*(C + k) == (*(B + k))) {
                ravn++;
            }
            else
                more++;
        }
    }
    cout << "A[k] = B[k]: " << ravn << endl;
    cout << "A[k] < B[k]: " << min << endl;
    cout << "A[k] > B[k]: " << more << endl;

}