#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	double Pi = 3.141592653589793;

	double R;
	cout << "������� ������ ������� ����������: " << endl;
	cin >> R;

	double r;
	cout << "������� ������ ����� ����������: " << endl;
	cin >> r;

	double area = Pi * (R * R - r * r);
	cout << "������� ������ = " << area << endl;

	return 0;
}