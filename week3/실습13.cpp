#include <iostream>
#define START_DAY 5 // 상수 선언
#define DAYS_OF_MONTH 31 // 상수 선언

using namespace std;

int main() {
	int day, date;
	cout << "===================================" << endl;
	cout << "  Sun. Mon. Tue. Wed. Thu. Fri. Sat" << endl;
	cout << "===================================" << endl;

	for (day = 0; day < START_DAY; day++)
		cout << "     ";
	for (date = 1; date <= DAYS_OF_MONTH; date++) {
		if (day == 7) {
			day = 0;
			cout << endl;
		}
		day++;
		cout.width(5);
		cout << date;
		}
	cout << "\n===================================" << endl;

}