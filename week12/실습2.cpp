#include <iostream>
using namespace std;

int main() {
	int a[] = { 10,20,30,40,50 }; // int type 배열 a 생성
	
	cout << "a = " << a << endl; // 배열 a의 주소값 출력
	cout << "&a[1] = " << &a[1] << endl; // 두 번째 원소의 주솟값 출력
	cout << "a + 1 = " << a+1 << endl; // 두 번째 원소의 주솟값 출력
	cout << "*a = " << *a << endl; // *a 를 통해 배열의 첫번째 원소의 값 출력
	cout << "*(a + 1) = " << *(a + 1) << endl; // 두 번째 원소의 값 출력

	return 0;
}
