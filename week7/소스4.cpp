#include <iostream>
#include<iomanip>

using namespace std;

int main() {
	int grade[10] = { 31, 63, 62, 87, 14, 25, 92, 70, 75, 53 };

	cout << "=============" << endl;
	cout << " INDEX VALUE " << endl;
	cout << "=============" << endl;

	for (int i = 0; i < 10; i++) {
		cout << setw(5) << i << setw(5) << grade[i] << endl;
	}
	return 0;
}