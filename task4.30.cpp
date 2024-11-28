#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");

	int n;
	cout << "Введите трехзначное число: ";
	cin >> n;

	int a = n % 10; //единицы
	int b = n % 100 / 10; //десятки
	int c = n / 100; //сотни

	int summ = a + b + c;

	int proizv = a * b * c;

	if (10 <= summ <= 99)
		cout << "а) Да, является" << endl;
	else
		cout << "а) Нет, не является" << endl;

	if (100 <= proizv <= 999)
		cout << "б) Да, является" << endl;
	else
		cout << "б) Нет, не является" << endl;

	int A;
	cout << "Введите число А: " << endl;
	cin >> A;

	if (proizv > A)
		cout << "в) Да, больше" << endl;
	else
		cout << "в) Нет, не больше" << endl;

	if (summ % 5 == 0)
		cout << "г) Да, кратна" << endl;
	else
		cout << "г) Нет, не кратна" << endl;

	if (summ % A == 0)
		cout << "д) Да, кратна" << endl;
	else
		cout << "д) Нет, не кратна" << endl;

	return 0;

}
