#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int rows, cols;
    int irows = -1;
    int sum = 0;
    bool allPlus;

    cout << "Введите кол-во строк: ";
    cin >> rows;
    cout << "Введите кол-во столбцов: ";
    cin >> cols;

    srand(time(NULL));

    int** array = new int* [rows];

    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = rand() % 10 - 5;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << '\t';
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        allPlus = true;
        for (int j = 0; j < cols; j++) {
            if (array[i][j] < 0) {
                allPlus = false;
                break;
            }
        }
        if (allPlus) {
            irows = i;
            break;
        }
    }

    cout << endl << endl << irows << endl << endl;
    if (irows == -1) {
        cout << "Не было найдено строки матрицы с положительными элементами";
        exit(0);
    }

    for (int j = 0; j < cols; j++) {
        sum += array[irows][j];
    }

    cout << endl << endl << sum << endl << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] -= sum;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << '\t';
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;
}