#include <iostream>


using namespace std;

void main1() {
    int rows, cols;
    int negative = 0, positive = 0, zero = 0;

    cout << "������� ���-�� �����: ";
    cin >> rows;
    cout << "������� ���-�� ��������: ";
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
        for (int j = 0; j < cols; j++) {
            if (array[i][j] > 0) {
                positive++;
            }
            if (array[i][j] < 0) {
                negative++;
            }
            if (array[i][j] == 0) {
                zero++;
            }
        }
    }

    cout << "���-�� ������������� ���������: \t" << positive << endl;
    cout << "���-�� ������������� ���������: \t" << negative << endl;
    cout << "���-�� ������� ���������: \t" << zero << endl;


    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;
}

void main2() {
    const int sz = 1000;
    char* str = new char[sz];

    cout << "������� ������: ";
    cin.getline(str, sz);



    int count = 0;
    bool isWord = false;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {

            if (!isWord) {
                count++;
                isWord = true;
            }
        }
        else {

            isWord = false;
        }
    }

    cout << "����� ���������� ����: " << count << endl;
}


int main()
{
    setlocale(LC_ALL, "rus");
    int choice;
    cout << "������� ����� ������� ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        main1();
        break;
    }
    case 2: {
        main2();
        break;
    }
    default: cout << "������";
    }
}