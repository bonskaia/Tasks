#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");

	bool A = true;
	bool B = false;
	bool C = false;

	bool a = A || !(A && B) || C;
	bool b = !A || A && (B || C);
	bool c = (A || B || !C) && C;

	cout << "Результат a = " << a << endl;
	cout << "Результат b = " << b << endl;
	cout << "Результат c = " << c << endl;

}
