#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    const int size = 100;
    int value = 0, maxval=0, mas[size], n, x;
    cout << "������� ����������� �������(�� ����� 100) "; cin >> n;
    if (n > 100)
        cout << "�� ����� ������������ �����";
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "������� " << i + 1 << " ������� �������: "; cin >> x;
            mas[i] = x;
        }
        for (int i = 0; i < n; i++)
        {
            if (mas[i] == mas[i - 1])
            {
                value++;
                if (value > maxval) {
                    maxval = value;
                }
            }
            else
            {
                value = 1;
            }
        }
    cout << "����������: " << maxval;
    }
}