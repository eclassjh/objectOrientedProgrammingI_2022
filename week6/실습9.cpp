#include <iostream>

using namespace std;
int main() {
	int x, y;
	void swap(int, int);
	cout << "Enter the values of x and y ." << endl;
	cin >> x;
	cin >> y;
	swap(x, y);
	cout << "x = " << x << ", y = " << y << endl;
}

void swap(int a, int b) {
	int c;
	c = a;
	a = b;
	b = c;
	cout << "Values afer swapping x and y is .. x = " << a << " , y = " << b << endl;
}
