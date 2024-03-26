// 실습 9 위치 지정 버젼 (w/ pointer)
#include <iostream>

using namespace std;
int main() {
	int x, y;
	void swap(int *, int *);
	cout << "Enter the values of x and y ." << endl;
	cin >> x;
	cin >> y;
	swap(&x, &y);
//	cout << "x = " << x << ", y = " << y << endl;
	cout << "x의 주소 = " << &x << ", y의 주소 = " << &y << endl;
}

void swap(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
	cout << "Values afer swapping x and y is .. x = " << *a << " , y = " << *b << endl;
}
