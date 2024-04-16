#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n, m, check = 0, sum=0;
    bool f = true;
    cout << "Введите количество строк и столбцов: ";
    cin >> n >> m;
    int** A = new int* [n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
    }
    srand(time(0));
    for (int i = 0;i < n;i++)
    {
        check = 0;
        for (int j = 0;j < m;j++)
        {

            A[i][j] = rand() % 20 - 1;
            cout << A[i][j] << " ";
            if (A[i][j] > 0)
            {
                check++;
            }
        }
        if (f && check == m)
        {
            f = false;
            for (int l = 0;l < m;l++)
            {
                sum += A[i][l];
            }
            
        }
        cout << endl;
    }
    if (f)
    {
        cout << "Строк со всеми положительными элементами нет";
    }
    else
    {
        cout << endl;
        for (int i = 0;i < n;i++)
        {
            for (int j = 0;j < m;j++)
            {
                A[i][j] -=sum;
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    for (int k = 0; k < n; k++) 
        delete[] A[k];
    delete[] A;

}