#include <iostream>
using namespace std;

int main() {
	int a[] = { 10,20,30,40,50 }; // int type 배열 a 생성
	cout << "&a[0] = " << &a[0] << endl; // 각 배열의 주솟값 출력
	cout << "&a[1] = " << &a[1] << endl;
	cout << "&a[2] = " << &a[2] << endl;
	// 주솟값이 4씩 증가함을 확인 (int type = 4 byte)
	cout << "a = " << a << endl;

	return 0;
}