#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int i, j, n;
    float more=0, min=0, ravn=0;
    cout << "������� ����������� ������� �������: "; cin >> n;
    int* A = new int[n];
    int* B = new int[n];
        for (int i = 0;i < n;i++)
        {
            cout << "������� " << i + 1 << " ������� �������: "; cin >> (*(A + i));
        }
        cout << endl;
        for (int i = 0; i < n;i++)
        {
            cout << "������� " << i + 1 << " ������� �������: "; cin >> (*(B + i));
        }
        for (int i = 0;i < n;i++)
        {
            if (*(A + i) < (*(B + i)))
            {
                    min++;
            }
            else {
                if (*(A + i) == (*(B + i))) {
                    ravn++;
                }
                else
                    more++;
            }
        }
        cout << "A[k] = B[k]: " << ravn<<endl;
        cout << "A[k] < B[k]: " << min << endl;
        cout << "A[k] > B[k]: " << more << endl;
    
}