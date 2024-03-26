#include <iostream>
using namespace std;

int check(int ch);
void main() {
	int i = 50;
	int c = check(i);
	cout << c << endl;
}

int check(int ch) {
	if (ch >= 45)
		return 100;
	else return 10;
}