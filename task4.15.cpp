/* Известны год и номер месяца рождения человека, а также год и номер месяца 
сегодняшнего дня (январь — 1 и т. д.). Определить возраст человека (число 
полных лет). В случае совпадения указанных номеров месяцев считать, что 
прошел полный год. */


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
