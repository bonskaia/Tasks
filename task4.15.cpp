#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");

	int monthOfBirth, currentMonth, yearOfBirth, currentYear;

	cout << "������� ����� ��������: " << endl;
	cin >> monthOfBirth;

	cout << "������� ��� ��������: " << endl;
	cin >> yearOfBirth;

	cout << "������� ������� �����: " << endl;
	cin >> currentMonth;

	cout << "������� ������� ���: " << endl;
	cin >> currentYear;

	int age;

	if (currentMonth >= monthOfBirth)
		age = currentYear - yearOfBirth;

	else
		age = currentYear - (yearOfBirth + 1);

	cout << "�������: " << age << endl;

	return 0;

}