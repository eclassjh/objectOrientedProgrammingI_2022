#include <iostream>
using namespace std;

int multiply(int ch);
void main() {
	int i = 40;
	int c = multiply(i*1000);
	cout << c << endl;
}

int multiply(int ch) {
	if (ch >= 40000)
		return ch / 10;
	else return 10;
}