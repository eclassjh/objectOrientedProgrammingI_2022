#include <iostream>
using namespace std;

void sub(int* p) {
	*p = 200;
}

int main() {
	int i = 100;
	sub(&i); // i�� p�� binding ��, ������ memory ���� ���� // call by reference
	cout << i << endl; // 200 ���
}