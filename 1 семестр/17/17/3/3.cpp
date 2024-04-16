#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int size, firstzero, lastzero, sum = 0;
    cout << "¬ведите размер массива: ";
    cin >> size;
    int* array = new int[size];
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 5;
    }

    for (int i = 0; i < size; i++) {
        cout << array[i] << "  ";
    }

    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            firstzero = i;
            break;
        }
    }
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            lastzero = i;
        }
    }
    for (int i = firstzero + 1; i < lastzero; i++) {
        sum += array[i];
    }
    cout << endl << "sum= " << sum << endl;

    delete[] array;
}

