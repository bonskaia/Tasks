#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	double Pi = 3.141592653589793;

	double R;
	cout << "Введите радиус большой окружности: " << endl;
	cin >> R;

	double r;
	cout << "Введите радиус малой окружности: " << endl;
	cin >> r;

	double area = Pi * (R * R - r * r);
	cout << "Площадь кольца = " << area << endl;

	return 0;
}
