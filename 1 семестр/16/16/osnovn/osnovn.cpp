#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int N, M, k, val = 0;
    cout << "������� ���������� ����� � ��������: "; cin >> N >> M;
    cout << "������� ����� k: "; cin >> k;
    int** A = new int* [N];
    for (int i = 0; i < N; i++) {
        A[i] = new int[M];
    }
    srand(time(0));
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < M;j++)
        {
            A[i][j] = rand() % 20;
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    for (int j = 0;j < M;j++)
    {
        for (int i = 0;i < N;i++)
        {
            if (A[i][j] == k)
            {
                val = j + 1;
            }
        }
    }
    if (val == 0)
    {
        cout << "�� � ����� ������� ���� ����� " << k;
    }
    else {
        cout << "� " << val << " ������� ��������� ����� " << k;
    }
}