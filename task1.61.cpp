/* Дано вещественное число а. Пользуясь только операцией умножения, получить:
а) 4 a за две операции;
б) 6 a за три операции;
в) 7 a за четыре операции;
г) 8 a за три операции;
д) 9 a за четыре операции;
е) 10 a за четыре операции;
ж) 13 a за пять операций;
з) 15 a за пять операций;
и) 21 a за шесть операций;
к) 28 a за шесть операций;
л) 64 a за шесть операций. */





#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");

	double a;

	cout << "Введите a: " << endl;
	cin >> a;

	double a2 = a * a;
	double a3 = a * a * a;
	double a4 = a * a * a2;
	double a6 = a * a * a2 * a2;
	double a7 = a * a * a * a2 * a2;
	double a8 = a2 * a2 * a2 * a2;
	double a9 = a * a2 * a2 * a2 * a2;
	double a10 = a2 * a2 * a2 * a2 * a2;
	double a13 = a * a2 * a2 * a2 * a3 * a3;
	double a15 = a2 * a2 * a2 * a3 * a3 * a3;
	double a21 = a3 * a3 * a3 * a3 * a3 * a3 * a3;
	double a28 = a4 * a4 * a4 * a4 * a4 * a4 * a4;
	double a64 = a4 * a10 * a10 * a10 * a10 * a10 * a10;

	cout << "Результаты вычислений: " << endl;
	cout << a4<< endl;
	cout << a6 << endl;
	cout << a7 << endl;
	cout << a8 << endl;
	cout << a9 << endl;
	cout << a10 << endl;
	cout << a13 << endl;
	cout << a15 << endl;
	cout << a21 << endl;
	cout << a28 << endl;
	cout << a64 << endl;

	return 0;
}
