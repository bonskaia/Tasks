#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");

	int A;
	cout << "������� ����� �����: " << endl;
	cin >> A;

	if (A % 2 == 0 || A % 3 == 0)
		cout << "�� �������� �) ������� �������" << endl;
	else
		cout << "�� �������� �) ������� �����" << endl;

	if (A % 3 != 0 && A % 10 == 0)
		cout << "�� �������� �) ������� �������" << endl;
	else
		cout << "�� �������� �) ������� �����" << endl;

	return 0;

}