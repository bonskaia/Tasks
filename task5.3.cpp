#include <iostream>
using namespace std;

int main() 
{

    setlocale(0, "");
    
    cout << "����� �� 20 �� 35: " << endl;
    for (int i = 20; i <= 35; ++i) {
        cout << i << endl;
    }

    int b, a;

    cout << "������� b, a (b >= 10, a <= 50, b >= a): " << endl;
    cin >> b;
    cin >> a;

    cout << "�������� ����� �� 10 �� " << b << ": "<< endl;
    for (int i = 10; i <= b; ++i) {
        cout << pow( i, 2.0) << endl;
    }

    cout << "������ ������� ����� �� " << a << " �� 50:" << endl;
    for (int i = a; i <= 50; ++i) {
        cout << pow(i, 3) << endl;
    }

    cout << "����� �� " << a << " �� " << b << ": " << endl;
    for (int i = a; i <= b; ++i) {
        cout << i << endl;
    }

    return 0;
}