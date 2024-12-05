/* Вычислить значение логического выражения при следующих значениях логи
ческих величин А, В и С: А = Истина, В = Ложь, С = Ложь: 
а) А или не (А и В) или С; 
б) не А или А и (В или С); 
в) (А или В и не С) и С. */


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
