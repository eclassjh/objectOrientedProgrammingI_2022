#include <iostream>

using namespace std;

int main() {

	int i = 0;
	int j = 0;

	int even = 0;
	int odd = 0;
	for (i = 1; i <= 10; i+=2) {
		odd += i;
		cout << "i = " << i << endl;
	}
	for (j = 0; j <= 10; j += 2) {
		even += j;
		cout << "j = " << j << endl;
	}
	cout << "odd = " << odd << endl;
	cout << "even = " << even << endl;

	return 0;
}