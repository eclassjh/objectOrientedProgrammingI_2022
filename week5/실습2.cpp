#include <iostream>
using namespace std;

// function prototype : 함수가 main보다 밑에 있으면 아래에 있다고 표시하는 것
int add(int a, int b);
int square(int a);

void main() {
/*	int x = 1, y = 2, z;
	z = add(x, y);
	cout << "x와 y의 합은 " << z << "입니다." << endl;
	*/
	int x = 101, z;
	z = square(x);
	cout << "Square x is " << z << endl;

}

int add(int a, int b) { // add 함수 정의
	return(a + b);
}

int square(int a) { // square 함수 정의
	return (a * a);
}