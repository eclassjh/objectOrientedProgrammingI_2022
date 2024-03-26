#include <iostream>

using namespace std;

int main() {
	int x = 4, y, z;

	y = --x; // 전위 연산자 ) x - 1을 계산 하여 x에 저장, 그 후에 y = x // x = y = 3
	z = x--; // 후위 연산자 ) z = x를 먼저 계산 한 후에 x - 1을 계산 하여 x에 저장 // x = 2, z = 3
	z = x-- - y;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	return 0;
} // x = 2, y = 3, z = 3