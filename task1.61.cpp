#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");

	double a;

	cout << "Введите a: " << endl;
	cin >> a;

	double aToThe4thPower = a * a * pow(a, 2.0);
	double aToThe6thPower = a * a * pow(a, 2.0) * pow(a, 2.0);
	double aToThe7thPower = a * a * a * pow(a, 2.0) * pow(a, 2.0);
	double aToThe8thPower = pow(a, 2.0) * pow(a, 2.0) * pow(a, 2.0) * pow(a, 2.0);
	double aToThe9thPower = a * pow(a, 2.0) * pow(a, 2.0) * pow(a, 2.0) * pow(a, 2.0);
	double aToThe10thPower = pow(a, 2.0) * pow(a, 2.0) * pow(a, 2.0) * pow(a, 2.0) * pow(a, 2.0);
	double aToThe13thPower = a * pow(a, 2.0) * pow(a, 2.0) * pow(a, 2.0) * pow(a, 3.0) * pow(a, 3.0);
	double aToThe15thPower = pow(a, 2.0) * pow(a, 2.0) * pow(a, 2.0) * pow(a, 3.0) * pow(a, 3.0) * pow(a, 3.0);
	double aToThe21thPower = pow(a, 3.0) * pow(a, 3.0) * pow(a, 3.0) * pow(a, 3.0) * pow(a, 3.0) * pow(a, 3.0) * pow(a, 3.0);
	double aToThe28thPower = pow(a, 4.0) * pow(a, 4.0) * pow(a, 4.0) * pow(a, 4.0) * pow(a, 4.0) * pow(a, 4.0) * pow(a, 4.0);
	double aToThe64thPower = pow(a, 4.0) * pow(a, 10.0) * pow(a, 10.0) * pow(a, 10.0) * pow(a, 10.0) * pow(a, 10.0) * pow(a, 10.0);

	cout << "Результаты вычислений: " << endl;
	cout << aToThe4thPower << endl;
	cout << aToThe6thPower << endl;
	cout << aToThe7thPower << endl;
	cout << aToThe8thPower << endl;
	cout << aToThe9thPower << endl;
	cout << aToThe10thPower << endl;
	cout << aToThe13thPower << endl;
	cout << aToThe15thPower << endl;
	cout << aToThe21thPower << endl;
	cout << aToThe28thPower << endl;
	cout << aToThe64thPower << endl;

	return 0;
}
