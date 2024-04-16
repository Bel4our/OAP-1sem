#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    const int k = 50;
    int n;
    cout << "¬ведите размерность массива(не более 56) "; cin >> n;
    int arr[k];
    for (int i = 0; i < n; i++) {
        cout << "¬ведите количество осадков дл€ дн€ " << i + 1 << ": ";
        cin >> arr[i];
    }

    const int daysweek = 7;
    int maxosadki = 0;
    int mainweek = 0;

    for (int i = 0; i <= n - daysweek; i += daysweek) {
        int osadki = 0;
        for (int j = i; j < i + daysweek; j++) {
            osadki += arr[j];
        }

        if (osadki > maxosadki) {
            maxosadki = osadki;

            mainweek = i / daysweek + 1;
        }
    }

    cout << "Ќаибольшее количество осадков выпало в неделю: " << mainweek << endl;
}