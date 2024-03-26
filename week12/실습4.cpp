#include <iostream>
using namespace std;

void sub(int* p); // sub함수 prototype 선언

int main() {
	int i = 100;

	cout << "i = " << i << endl;
	sub(&i); // call by reference
	// i의 포인터 변수를 sub함수에 대입
	cout << "i = " << i << endl;

	return 0;
}

void sub(int* p) { // sub함수 정의부
	*p = 200; // 포인터 변수를 받아 그 값을 200으로 변환시켜주는 함수
}

