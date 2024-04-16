#include <iostream>
using namespace std;
void change(int** arr, int rows, int cols)
{
    for (int j = 0; j < cols; j++)
    {
        int k = 0;
        for (int i = 0; i < rows; i++) 
        {
            if (arr[i][j] >= 0) 
            {
                k++;
            }
            if (k == rows)
            {
                if (j != 0)
                {
                    for (int i = 0; i < rows; i++)
                    {
                        arr[i][j - 1] *= -1;
                    }
                }
                if (j != 0)
                {
                    for (int i = 0; i < rows; i++)
                    {
                        arr[i][j] *= -1;
                    }
                }
            }
        }
       
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n, m;
    cout << "Введите количество строк и столбцов: ";
    cin >> n >> m;

    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            arr[i][j] = rand() % 50-5;
            cout << arr[i][j]<<" ";
        }
        cout << "\n";
    }

    change(arr, n, m);
    

    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            cout << arr[i][j] << ' ';
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}