#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");

	int n;
	cout << "������� ���������� ������: ";
	cin >> n;

	int hours = n / 360 % 24;
	int minutes = n / 60 % 60;
	int seconds = n % 60;

	cout << "������ ����� � ������ ����� ������: " << hours << endl;
	cout << "������ ����� � ������ ���������� ���� ������: " << minutes << endl;
	cout << "������ ������ � ������ ��������� ������ ������: " << seconds << endl;

	return 0;

}