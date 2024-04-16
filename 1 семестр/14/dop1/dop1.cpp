#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int n;
    cout << "������� n (�� ����� 50): ";
    cin >> n;
    if (n > 50)
        cout << "�� ����� ������������ ��������";
    else
    {
      
        int A[100][100];
        for (int i = 0; i < 2 * n; i++) 
        {
            for (int j = 0; j < 2 * n; j++) 
            {
                A[i][j] = rand() % 21 - 10;
            }
        }
        cout << "�������� �������:\n";
        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }       
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++)
            {
                swap(A[i][j], A[i + n][j + n]);
                swap(A[i][j + n], A[i + n][j]);
            }
        }
        cout << "������� ����� ������������:\n";
        for (int i = 0; i < 2 * n; i++) 
        {
            for (int j = 0; j < 2 * n; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }
    }
}
