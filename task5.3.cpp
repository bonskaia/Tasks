/* Напечатать "столбиком": 
а) все целые числа от 20 до 35; 
б) квадраты всех целых чисел от 10 до b (значение b вводится с клавиатуры; 
b  10); 
в) третьи степени всех целых чисел от a до 50 (значение a вводится с клавиа
туры; a  50); 
г) все целые числа от a до b (значения a и b вводятся с клавиатуры; b  a). */



#include <iostream>
using namespace std;

int main() 
{

    setlocale(0, "");
    
    cout << "Числа от 20 до 35: " << endl;
    for (int i = 20; i <= 35; ++i) {
        cout << i << endl;
    }

    int b, a;

    cout << "Введите b, a (b >= 10, a <= 50, b >= a): " << endl;
    cin >> b;
    cin >> a;

    cout << "Квадраты чисел от 10 до " << b << ": "<< endl;
    for (int i = 10; i <= b; ++i) {
        cout << pow( i, 2.0) << endl;
    }

    cout << "Третьи степени чисел от " << a << " до 50:" << endl;
    for (int i = a; i <= 50; ++i) {
        cout << pow(i, 3.0) << endl;
    }

    cout << "Числа от " << a << " до " << b << ": " << endl;
    for (int i = a; i <= b; ++i) {
        cout << i << endl;
    }

    return 0;
}
