#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    
        int rows, cols;


        cout << "¬ведите кол-во строк: ";
        cin >> rows;
        cout << "¬ведите кол-во столбцов: ";
        cin >> cols;



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
                cout << array[i][j] << "  ";
            }
            cout << endl;
        }


        for (int i = 0; i < rows; i++) {
            bool findzero = false;
            for (int j = 0; j < cols; j++) {
                if (array[i][j] == 0) {
                    findzero = true;
                    break;
                }
            }

            if (!findzero) {
                for (int j = 0; j < cols; j++) {
                    if (array[i][j] < 0) {
                        array[i][j] = 0;
                    }
                }
            }
        }

        cout << endl << endl;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << array[i][j] << "  ";
            }
            cout << endl;
        }




        for (int i = 0; i < rows; i++) {
            delete[] array[i];
        }
        delete[] array;
    
}