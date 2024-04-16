#include <iostream>
using namespace std;
void find(int** A, int m, int n)
{
    int maxval = INT_MIN;
    int count = 0;
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] > maxval) 
            {
                maxval = A[i][j];
                count = 1;
            }
            else if (A[i][j] == maxval)
            {
                ++count;
            }
        }
    }

    cout << "Максимальное значение: " << maxval << endl;
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {

            if (A[i][j] == maxval) 
            {
                cout << i << " " << j << endl;
            }
        }
    }
    cout << "Количество повторений: " << count << endl;
}

int main() 
{
    setlocale(LC_ALL, "rus");
    int m, n;
    cout << "Введите количество строк и столбцов: ";
    cin >> m >> n;

    int** A = new int* [m];
    for (int i = 0; i < m; i++) 
    {
        A[i] = new int[n];
    }

    srand(time(0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
           A[i][j]=rand()%20;
           cout << A[i][j]<<" ";
        }
        cout << "\n";
    }

    find(A, m, n);

    for (int i = 0; i < m; i++)
    {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}
