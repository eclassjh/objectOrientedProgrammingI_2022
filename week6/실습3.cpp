#include <iostream>
using namespace std;

void sub1(void) {
	int x;
	x = 0;
	{
		int y = 0;
		x = 1;
		y = 2;
		cout << "x = " << x << " , y = " << y << endl;
	}
	x = 3;
//	y = 4;
	cout << "x = " << x << endl;
}

void sub2(void) {
	int x;
	x = 0;
	{
		int y;
		x = 1;
		y = 2;
		cout << "x = " << x << " , y = " << y << endl;
	}
	{
		int y;
		x = 3;
		y = 3;
		cout << "x = " << x << " , y = " << y << endl;
	}
	cout << "x = " << x << endl;
}

int main() {
	cout << "sub1 실행 : " << endl;
	sub1();
	cout << "sub2 실행 : " << endl;
	sub2();

	return 0;
}