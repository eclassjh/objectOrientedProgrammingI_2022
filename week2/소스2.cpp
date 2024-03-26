// Ex 1-2 : overflow
#include <iostream>
using namespace std;


void main() {
	int x;
	unsigned y;

	x = 2147483647;
	
	cout << "x = " << x << endl;
	cout << "x + 1 = " << x + 1 << endl;
	cout << "x + 2 = " << x + 2 << endl;
	cout << "x + 3 = " << x << endl;

	y = 4294967295;

	cout << "y = " << y << endl;
	cout << "y + 1 = " << y + 1 << endl;
	cout << "y + 2 = " << y + 2 << endl;
	cout << "y + 3 = " << y + 3 << endl;

}