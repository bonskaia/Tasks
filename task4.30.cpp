#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");

	int n;
	cout << "������� ���������� �����: ";
	cin >> n;

	int a = n % 10; //�������
	int b = n % 100 / 10; //�������
	int c = n / 100; //�����

	int summ = a + b + c;

	int proizv = a * b * c;

	if (10 <= summ <= 99)
		cout << "�) ��, ��������" << endl;
	else
		cout << "�) ���, �� ��������" << endl;

	if (100 <= proizv <= 999)
		cout << "�) ��, ��������" << endl;
	else
		cout << "�) ���, �� ��������" << endl;

	int A;
	cout << "������� ����� �: " << endl;
	cin >> A;

	if (proizv > A)
		cout << "�) ��, ������" << endl;
	else
		cout << "�) ���, �� ������" << endl;

	if (summ % 5 == 0)
		cout << "�) ��, ������" << endl;
	else
		cout << "�) ���, �� ������" << endl;

	if (summ % A == 0)
		cout << "�) ��, ������" << endl;
	else
		cout << "�) ���, �� ������" << endl;

	return 0;

}