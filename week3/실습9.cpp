#include <iostream>

using namespace std;

int main() {
	float x = 1.1; // double�� �ϸ� ���� ��

	while (x == 1.1) {
		x = x - 0.1;
		cout << "x : " << x << endl;
	}

}