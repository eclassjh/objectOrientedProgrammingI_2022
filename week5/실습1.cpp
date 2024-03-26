#include <iostream>
using namespace std;

int square(int n) { // 제곱 함수 정의
	return n * n;
}

int get_max(int x, int y) { // 최댓값 도출 함수 정의
	if (x >= y)
		return x;
	else
		return y;
}

int absolute(int x) { // 절댓값 출력 함수 정의
	if (x >= 0)
		return x;
	else
		return -x;

}

void draw_rect(int side) { // *로 정사각형 만드는 함수 정의
	int x, y;
	for (int y = 0; y < side; y++) {
		for (int x = 0; x < side; x++)
			cout << "* ";
		cout << endl;
	}
}

int get_integer(void) { // 정숫값 입력받는 함수 정의
	int n;
	cout << "Integer value : ";
	cin >> n;

	return n;
}

int power(int a, int b) { // a의 b제곱을 출력하는 함수 정의

	//int i;
	long result = 1;
	for (int i = 0; i < b; i++) {
		result *= a;

	}
	return result;
}

int factorial(int x) { // 팩토리얼을 계산해주는 함수 정의
	int result = 1;
	for (int i = 1; i <= x; i++) {
		result *= i;
	}
	return result;
}

int main(){
/*while (1) { 
		int a;
		cin >> a;
		cout << "square " << a << " is " << square(a) << endl;
	}	
	
	
	int a = 10, b = 5;
	cout << "Max between " << a << " or " << b << " is " << get_max(a, b) << endl;


	int a = 10, b = -200;
	cout << "Absolute " << a << " is " << absolute(a) << endl;
	cout << "Absolute " << b << " is " << absolute(b) << endl;

	draw_rect(5);

	
	cout << get_integer();

	int a = 2, b = 10;
	cout << "Power (" << a << ", " << b << (") is ") << power(a, b) << endl;*/

	int a = factorial(5);
	cout << a << endl;
	cout << factorial(5) << endl;

	return 0;
}