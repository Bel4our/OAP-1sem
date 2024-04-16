#include <iostream>
using namespace std;
void find(int* arr, int size) 
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    cout << endl;
    cout << "����������� ��������: " << min << endl;
    cout << "������������ ��������: " << max << endl;
    cout << "��������: " << max - min << endl;
}

int main() 
{
    setlocale(LC_ALL, "rus");
    int size;
    cout << "������� ������ �������: ";
    cin >> size;

    int* arr = new int[size];
    srand(time(0));
    for (int i = 0; i < size; i++) 
    {
        arr[i] = rand() % 20;
        cout << arr[i] << " ";
    }

    find(arr, size);

    delete[] arr;
    return 0;
}
