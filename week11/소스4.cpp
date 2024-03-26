#include <iostream>
using namespace std;

int main() {
	char c = 'A';
	int i = 10000;
	double d = 6.78;

	char* pc = &c; // char type 변수 'c'를 받는 포인터 pc 정의
	int* pi = &i; // int type 변수 'i'를 받는 포인터 pi 정의
	double* pd = &d; // double type 변수 'd'를 받는 포인터 pd 정의

	(*pc)++; // c값 + 1 : ASCII(A) + 1 = ASCII(B)
	*pi = *pi + 1; // i값 + 1 : 1000 + 1 = 1001
	*pd += 1; // d값 + 1 : 6.78 + 1 = 7.78

	cout << c << endl;
	cout << i << endl;
	cout << d << endl;
}

