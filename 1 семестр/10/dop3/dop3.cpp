#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    const int size = 100;
    int value = 0, maxval=0, mas[size], n, x;
    cout << "Введите размерность массива(Не более 100) "; cin >> n;
    if (n > 100)
        cout << "Вы ввели неправильное число";
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Введите " << i + 1 << " элемент массива: "; cin >> x;
            mas[i] = x;
        }
        for (int i = 0; i < n; i++)
        {
            if (mas[i] == mas[i - 1])
            {
                value++;
                if (value > maxval) {
                    maxval = value;
                }
            }
            else
            {
                value = 1;
            }
        }
    cout << "Количество: " << maxval;
    }
}