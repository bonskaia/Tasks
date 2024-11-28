#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");

	int monthOfBirth, currentMonth, yearOfBirth, currentYear;

	cout << "Введите месяц рождения: " << endl;
	cin >> monthOfBirth;

	cout << "Введите год рождения: " << endl;
	cin >> yearOfBirth;

	cout << "Введите текущий месяц: " << endl;
	cin >> currentMonth;

	cout << "Введите текущий год: " << endl;
	cin >> currentYear;

	int age;

	if (currentMonth >= monthOfBirth)
		age = currentYear - yearOfBirth;

	else
		age = currentYear - (yearOfBirth + 1);

	cout << "Возраст: " << age << endl;

	return 0;

}
