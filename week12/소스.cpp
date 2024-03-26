#include <iostream>

using namespace std;
int main() {
	int a[] = { 10, 20, 30, 40, 50 };
	cout << long long(a) << endl;
	cout << long long(a+1) << endl;
	cout << long long(a + 2) << endl;
	cout << long long(a + 3) << endl; // a가 int면 4씩, double이면 8씩 커짐
	cout << sizeof(& a[0]) << endl;
	cout << &a[0] << endl;
	cout << "주소값 : " << sizeof(&a[0]) << endl; // sizeof : 배열 넣어줬을 때 카
	cout << &a[1] << endl;
	cout << "주소값 : " << sizeof(&a[1]) << endl;
	cout << &a[2] << endl;
	cout << "주소값 : " << sizeof(&a[2]) << endl;
	cout << &a[3] << endl;
	cout << "주소값 : " << sizeof(&a[3]) << endl; // 주소의 size는 항상 fixed 됨 (datatype가 바뀌어도 동일함)
	cout << *a << endl;
	cout << *(a+1) << endl;
	cout << *a+1 << endl;

	system("pause");

}

