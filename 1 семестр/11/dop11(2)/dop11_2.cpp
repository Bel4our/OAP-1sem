#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "rus");
    unsigned int A, B;
    int n, m, p, q;
    char tmp[33];
    cout << "¬ведите целое число A "; cin >> A;
    cout << "¬ведите позицию "; cin >> p;
    cout << "¬ведите количество инверитуремых битов "; cin >> n;
    cout << "¬ведите целое число B"; cin >> B;
    cout << "¬ведите позицию "; cin >> q;
    cout << "¬ведите количество инверитуремых битов "; cin >> m;
    _itoa_s(A, tmp, 2);
    cout << tmp << endl;
    _itoa_s(B, tmp, 2);
    cout << tmp << endl;


}