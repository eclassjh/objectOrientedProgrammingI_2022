#include <iostream>
using namespace std;

// function prototype : 함수가 main보다 밑에 있으면 아래에 있다고 표시하는 것
int factorial(int x);
int combination(int x, int y);
int get_integer(void);

void main() { // 함수를 실행시키는 main 함수.
	int a, b;
	a = get_integer();
	b = get_integer();

	cout << "C(" << a << ", " << b << ") is " << combination(a, b) << endl;
}

int get_integer(void) { // 정수를 입력받는 함수
	int n;
	cout << "Integer value : ";
	cin >> n;

	return n;
}

int factorial(int x) { // factorial을 정의하는 함수
	int result = 1;
	for (int i = 1; i <= x; i++) {
		result *= i;
	}
	return result;
}

int factorial_ver2(int n) { // factorial을 재귀함수로 정의함
	if (n == 1)
		return 1;
	return n * factorial_ver2(n - 1);
}
// n = 5
// 5 * factorial_ver2(4)
// 5 * 4 * factorial_ver2(3)
// 5 * 4 * 3 * factorial_ver2(2)
// ...

int combination(int x, int y) { // combination 함수 정의  ( 함수 속에 함수 사용 가능)
	return factorial(x) / (factorial(x - y) * factorial(y));
}