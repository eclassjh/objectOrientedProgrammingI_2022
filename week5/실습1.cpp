#include <iostream>
using namespace std;

int square(int n) { // ���� �Լ� ����
	return n * n;
}

int get_max(int x, int y) { // �ִ� ���� �Լ� ����
	if (x >= y)
		return x;
	else
		return y;
}

int absolute(int x) { // ���� ��� �Լ� ����
	if (x >= 0)
		return x;
	else
		return -x;

}

void draw_rect(int side) { // *�� ���簢�� ����� �Լ� ����
	int x, y;
	for (int y = 0; y < side; y++) {
		for (int x = 0; x < side; x++)
			cout << "* ";
		cout << endl;
	}
}

int get_integer(void) { // ������ �Է¹޴� �Լ� ����
	int n;
	cout << "Integer value : ";
	cin >> n;

	return n;
}

int power(int a, int b) { // a�� b������ ����ϴ� �Լ� ����

	//int i;
	long result = 1;
	for (int i = 0; i < b; i++) {
		result *= a;

	}
	return result;
}

int factorial(int x) { // ���丮���� ������ִ� �Լ� ����
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