#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_CTYPE, "Russian");
    int value = 0, a = 0, b = 0, c = 0, d = 0, rub = 100;
    for(a=0; a <=2; a++){
        for(b=0;b<=5;b++){
            for(c=0;c<=20;c++){
                for(d=0;d<=50;d++){
                    if(rub==(a * 50 + b * 20 + c * 5 + d * 2))
                        value++;
0                }
            }
        }
    }
    cout << "Количество наборов одного рубля = " << value;

}