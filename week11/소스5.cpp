#include <iostream>
using namespace std;

int main() {

	int i = 10000;
	int* p, * q;

	p = &i;
	q = &i;
	// i�� �ּҸ� ����Ű�� ������ ���� p,q

	*p = *p + 1; // i += 1 --> i = 1001
	*q = *q + 1; // i += 1 --> i = 1002

	cout << i << endl; // 1002

}


