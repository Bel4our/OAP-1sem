#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int size, max = 0, min = 100, sum = 0;
    cout << "¬ведите размер массива: ";
    cin >> size;
    int* array = new int[size];
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 10 + 10;
    }

    for (int i = 0; i < size; i++) {
        cout << array[i] << "  ";
    }

    for (int i = 0; i < size; i++) {
        if (min > array[i]) {
            min = array[i];
        }

        if (max < array[i]) {
            max = array[i];
        }
    }
    cout << endl << "max= " << max << endl;
    cout << endl << "min= " << min << endl;

    sum = max + min;
    cout << endl << "sum= " << sum << endl;

    delete[] array;
}