#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    float more = 0, min = 0, ravn = 0;
    cout << "������� ����������� ������� �������: "; cin >> n;
    int* C = new int[n];
    int* B = new int[n];
    for (int k = 0;k < n;k++)
    {
        cout << "������� " << k + 1 << " ������� �������: "; cin >> (*(C + k));
    }
    cout << endl;
    for (int k = 0; k < n;k++)
    {
        cout << "������� " << k + 1 << " ������� �������: "; cin >> (*(B + k));
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