#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    const int sz = 100;
    int min = INT_MAX, max=INT_MIN, m=0,k=0, fval1,fval2,lval;
    int length = 0;
    char* str = new char[sz];


    cout << "¬ведите строку: ";
    cin.getline(str, sz);

    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] != ' ') {
            length++;
        }
        else {
      
            if (length > 0 && length < min) {
                min = length;
                fval1 = i;
                m = i -length;
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