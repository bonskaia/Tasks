/*  С начала суток прошло n секунд. Определить: 
а) сколько полных часов прошло с начала суток; 
б) сколько полных минут прошло с начала очередного часа; 
в) сколько полных секунд прошло с начала очередной минуты. */



#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "");

	int n;
	cout << "Введите количество секунд: ";
	cin >> n;

	int hours = n / 360 % 24;
	int minutes = n / 60 % 60;
	int seconds = n % 60;

	cout << "Полных часов с начала суток прошло: " << hours << endl;
	cout << "Полных минут с начала очередного часа прошло: " << minutes << endl;
	cout << "Полных секунд с начала очередной минуты прошло: " << seconds << endl;

	return 0;

}
