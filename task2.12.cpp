#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");
	
	int n;
	cout << "Введите трёхзначное число: ";
	cin >> n;

	int a = n % 10; //единицы
	int b = n % 100 / 10; //десятки
	int c = n / 100; //сотни

	int summ = a + b + c;

	int proizv = a * b * c;

	cout << "Число единиц: " << a << endl;
	cout << "Число десятков: " << b << endl;
	cout << "Сумма цифр числа: " << summ << endl;
	cout << "Произведение цифр числа: " << proizv << endl;

	return 0;

}