#include <iostream>
using namespace std;
void first()
{
	int N, max = INT_MIN, count = 0;
	cout << "¬ведите количество чисел: "; cin >> N;
	int* A = new int[N];
	srand(time(0));
	for (int i = 0;i < N;i++)
	{
		A[i] = rand() % 20;
		cout << A[i] << " ";
	}
	for (int i = 0;i < N;i++)
	{

		if (A[i] > max)
		{
			max = A[i];
		}
	}
	for (int i = 0;i < N;i++)
	{
		if (A[i] == max)
		{
			count++;
		}
	}
	cout << endl << count;
}
void second()
{
    const int sz = 100;
    int min = INT_MAX, max = INT_MIN, m = 0, k = 0, fval1, fval2, lval;
    int length = 0;
    char* str = new char[sz];


    cout << "¬ведите строку: ";
    cin.ignore();
    cin.getline(str, sz);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ') {
            length++;
        }
        else {

            if (length > 0 && length < min) {
                min = length;
                fval1 = i;
                m = i - length;
            }

            length = 0;

        }
    }
    for (int i = m;i < fval1;i++)
    {
        cout << str[i];
    }
    length = 0;
    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ') {
            length++;
        }
        else {

            if (length > 0 && length > max)
            {
                max = length;
                fval2 = i;
                k = i - length;
            }
            length = 0;

        }
    }
    cout << endl;
    for (int i = k;i < fval2;i++)
    {
        cout << str[i];
    }
    delete[] str;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int choice;
	cout << "¬ведите номер задани€ ";
	cin >> choice;
	switch (choice)
	{
    case 1: 
    {
        first();
        break;
    }
    case 2: {
        second();
        break;
    }
    default: cout << "ќшибка";
	}
}

