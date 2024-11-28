#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");

	int monthOfBirth, currentMonth, yearOfBirth, currentYear;

	cout << "¬ведите мес€ц рождени€: " << endl;
	cin >> monthOfBirth;

	cout << "¬ведите год рождени€: " << endl;
	cin >> yearOfBirth;

	cout << "¬ведите текущий мес€ц: " << endl;
	cin >> currentMonth;

	cout << "¬ведите текущий год: " << endl;
	cin >> currentYear;

	int age;

	if (currentMonth >= monthOfBirth)
		age = currentYear - yearOfBirth;

	else
		age = currentYear - (yearOfBirth + 1);

	cout << "¬озраст: " << age << endl;

	return 0;

}