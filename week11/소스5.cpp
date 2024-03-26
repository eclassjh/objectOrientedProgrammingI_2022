#include <iostream>
using namespace std;

int main() {

	int i = 10000;
	int* p, * q;

	p = &i;
	q = &i;
	// i의 주소를 가르키는 포인터 변수 p,q

	*p = *p + 1; // i += 1 --> i = 1001
	*q = *q + 1; // i += 1 --> i = 1002

	cout << i << endl; // 1002

}


