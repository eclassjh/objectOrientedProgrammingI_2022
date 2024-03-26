# include <iostream>
using namespace std;

int main() {
	int i = 1;
	int sum = 0;

	
	/*
	while (i <= 100) {
		sum += i;
		i++;
	}*/

	/*
	do {
		sum += i;
		i++;
	} while (i <= 100);
	*/

	for (i = 1; i <= 100; i++)
		sum += i;
	
	cout << "sum = " << sum << endl;
}