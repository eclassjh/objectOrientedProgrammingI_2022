#include <iostream>

using namespace std;

int main() {

	int i = 0 ;
	int sum = 0;
	int n = 10000;

	while (i <= n) {
		sum += i;
		i += 1;
	}

	cout << "sum = " << sum << endl;

	return 0;
}