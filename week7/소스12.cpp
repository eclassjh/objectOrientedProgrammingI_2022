#include <iostream>
using namespace std;

void main() {
	int avg, sum = 0;
	int i;
	int scores[5];
	for (i = 0; i <= 5; i++) {
		cout << "Enter scores" << endl;
		cin >> scores[i];
	}
	for (i = 0; i <= 5; i++) {
		sum += scores[i];
		avg = sum / 5;
	}
	cout << avg;
}