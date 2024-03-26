#include <iostream>
using namespace std;

int main() {
	int i;
	int* pd;
	pd = &i; // error! 포인터의 타입은 double 이지만 i의 타입은 int이기에 오류가 발생함
	// i 또는 pd의 data type을 바꾸어 통일 시켜야 함
	*pd = 36.5;

	cout << "i = " << i << endl;
	cout << "*pd = " << *pd << endl;

	return 0;
}

