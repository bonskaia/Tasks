#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	double Pi = 3.141592653589793;

	double R;
	cout << "¬ведите радиус большой окружности: " << endl;
	cin >> R;

	double r;
	cout << "¬ведите радиус малой окружности: " << endl;
	cin >> r;

	double area = Pi * (R * R - r * r);
	cout << "ѕлощадь кольца = " << area << endl;

	return 0;
}