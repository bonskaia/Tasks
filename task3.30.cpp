#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");

	int A;
	cout << "Введите целое число: " << endl;
	cin >> A;

	if (A % 2 == 0 || A % 3 == 0)
		cout << "По критерию а) условие истинно" << endl;
	else
		cout << "По критерию а) условие ложно" << endl;

	if (A % 3 != 0 && A % 10 == 0)
		cout << "По критерию б) условие истинно" << endl;
	else
		cout << "По критерию б) условие ложно" << endl;

	return 0;

}