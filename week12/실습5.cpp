#include <iostream>
using namespace std;

void swap(int x, int y); // swap 함수의 prototype 선언

// call by value swap

int main() { 
	int a = 100, b = 200;

	cout << "main() a = " << a << ", b = " << b << endl; // 바꾸기 전 a, b값 출력
	swap(a, b); // return값이 없어 main함수에는 영향을 주지 않음
	cout << "main() a = " << a << ", b = " << b << endl; // 바꾼 후 a, b값 출력

	return 0;
}

void swap(int x, int y) { // 두 정수를 받아 그 값을 바꿔주는 함수 swap 정의
	int tmp;
	cout << "before_swap() x = " << x << ", y = " << y << endl; // 들어온 x, y 값
	tmp = x;
	x = y;
	y = tmp;
	cout << "after_swap() x = " << x << ", y = " << y << endl; // 바뀐 후 x, y 값

}
