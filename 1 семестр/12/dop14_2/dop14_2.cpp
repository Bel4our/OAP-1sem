#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int const max = 50;
    int n, i = 0, j = 0, val = 0, t;
    cout << "¬ведите размерность массивов(не более 50) "; cin >> n;
    int K[max], y[max];
    cout << "¬ведите t ";
    cin >> t;
    for (int i = 0; i < n;i++)
    {
        cout << "¬ведите " << i + 1 << " элемент массива: "; cin >> (*(K + i));
    }

    for (int i = 0; i < n; i++)
        cout << K[i] << " ";
    cout << endl;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (K[j] > t && K[j + 1] < t)
            {
                K[j] = K[j] + K[j + 1];
                K[j + 1] = K[j] - K[j + 1];
                K[j] = K[j] - K[j + 1];
            }
    for (int i = 0; i < n; i++)
        cout << K[i] << " ";
    cout << endl;
}