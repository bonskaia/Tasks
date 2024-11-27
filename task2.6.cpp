#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");

	int n;
	cout << "¬ведите количество секунд: ";
	cin >> n;

	int hours = n / 360 % 24;
	int minutes = n / 60 % 60;
	int seconds = n % 60;

	cout << "ѕолных часов с начала суток прошло: " << hours << endl;
	cout << "ѕолных минут с начала очередного часа прошло: " << minutes << endl;
	cout << "ѕолных секунд с начала очередной минуты прошло: " << seconds << endl;

	return 0;

}