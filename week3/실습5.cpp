#include <iostream>

using namespace std;

int main() {
	int x = 4, y, z;

	y = --x; // ���� ������ ) x - 1�� ��� �Ͽ� x�� ����, �� �Ŀ� y = x // x = y = 3
	z = x--; // ���� ������ ) z = x�� ���� ��� �� �Ŀ� x - 1�� ��� �Ͽ� x�� ���� // x = 2, z = 3
	z = x-- - y;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	return 0;
} // x = 2, y = 3, z = 3