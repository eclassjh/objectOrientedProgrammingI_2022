#include <iostream>
using namespace std;

int main() {
	int a[] = { 10,20,30,40,50 }; // int type 배열 a 생성
	int* p; // 포인터 p 선언
	p = a; // p와 a binding

	cout << "a = " << a << ", p = " << p << endl << endl;
	cout << "a[0] = " << a[0] << "  a[1] = " << a[1] << "  a[2] = " << a[2] << endl;
	cout << "p[0] = " << p[0] << "  p[1] = " << p[1] << "  p[2] = " << p[2] << endl << endl;
	// 둘의 값이 동일함을 확인

	p[0] = 60;
	p[1] = 70;
	p[2] = 80;
	// a와 p의 주소가 같기 떄문에 a값도 함께 바뀜

	cout << "a[0] = " << a[0] << "  a[1] = " << a[1] << "  a[2] = " << a[2] << endl;
	cout << "p[0] = " << p[0] << "  p[1] = " << p[1] << "  p[2] = " << p[2] << endl << endl;
	// 동일하게 바뀜을 확인

	return 0;
}

