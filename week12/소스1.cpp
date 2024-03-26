#include <iostream>
using namespace std;

void sub(int* p) {
	*p = 200;
}

int main() {
	int i = 100;
	sub(&i); // i와 p가 binding 됨, 동일한 memory 공간 공유 // call by reference
	cout << i << endl; // 200 출력
}