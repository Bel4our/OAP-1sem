#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "rus");
    unsigned int A, B;
    int n, m, p, q;
    char tmp[33];
    cout << "������� ����� ����� A "; cin >> A;
    cout << "������� ������� "; cin >> p;
    cout << "������� ���������� ������������� ����� "; cin >> n;
    cout << "������� ����� ����� B"; cin >> B;
    cout << "������� ������� "; cin >> q;
    cout << "������� ���������� ������������� ����� "; cin >> m;
    _itoa_s(A, tmp, 2);
    cout << tmp << endl;
    _itoa_s(B, tmp, 2);
    cout << tmp << endl;


}