#include <iostream>
using namespace std;
constexpr int SIZE = 10;

int main() {
	int grade[SIZE];
	for (int i = 0; i < SIZE; i++) {
		cout << "enter the scores : ";
		cin >> grade[i];
	}

	int min = grade[0];
	int min_idx = 0;
	int max = grade[0];
	int max_idx = 0;
	for (int i = 1; i < SIZE; i++) {
		if (grade[i] < min){
			min = grade[i];
		min_idx = i;
	}
		if (grade[i] > max){}
			max = grade[i];
			max_idx = i;
	}
	cout << "minimum value is " << min << endl;
	cout << "its index is " << min_idx << endl;
	cout << "maximum value is " << max << endl;
	cout << "its index is " << max_idx << endl;


}