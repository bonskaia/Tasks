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

	cout << "����� ������: " << a << endl;
	cout << "����� ��������: " << b << endl;
	cout << "����� ���� �����: " << summ << endl;
	cout << "������������ ���� �����: " << proizv << endl;

	return 0;

}