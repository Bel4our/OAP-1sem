#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");

    const int sz = 1000, sz2=100, sz3=100;
    char* str= new char[sz], *str2= new char [sz2], * str3 = new char[sz3];
    char change;

    cout << "Введите строку: ";
    cin.getline(str, sz);
    int f = strlen(str);
    int count = 0, m=0, s=0, fval, lval,mval,j=0;
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
    if (count % 2 != 0)
    {
        cout << "Количество слов нечётное" << endl;
    }
    else
    {
        for (int i = 0; i < f; i++)
        {
            if (str[i] == ' ' || str[i] == '\0')
            {
                s++;
                if (s == (count / 2) - 1)
                {
                    fval = i;
                }
                if (s == count/2)
                {
                    mval = i;
                }
                if (s == (count / 2) + 1)
                {
                    lval = i;
                }

            }
        }
        for (int k = fval;k < mval;k++)
        {
            str2[j] = str[k];
            j++;
        }
        int b = j;
        j = 0;
        for (int k = mval;k < lval;k++)
        {
            str3[j] = str[k];
            j++;
        }
        int h = 0;
        for (int k = fval;h<j;k++)
        {
            str[k] = str3[h];
            h++;
        }
        h = 0;
        for (int k =fval+j;h < b;k++)
        {
            str[k] = str2[h];
            h++;
        }

        for (int k = 0;k < f;k++)
        {
            cout << str[k];
        }
    }
   
}
