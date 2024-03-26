#include <iostream>
using namespace std;

// function prototype : �Լ��� main���� �ؿ� ������ �Ʒ��� �ִٰ� ǥ���ϴ� ��
int factorial(int x);
int combination(int x, int y);
int get_integer(void);

void main() { // �Լ��� �����Ű�� main �Լ�.
	int a, b;
	a = get_integer();
	b = get_integer();

	cout << "C(" << a << ", " << b << ") is " << combination(a, b) << endl;
}

int get_integer(void) { // ������ �Է¹޴� �Լ�
	int n;
	cout << "Integer value : ";
	cin >> n;

	return n;
}

int factorial(int x) { // factorial�� �����ϴ� �Լ�
	int result = 1;
	for (int i = 1; i <= x; i++) {
		result *= i;
	}
	return result;
}

int factorial_ver2(int n) { // factorial�� ����Լ��� ������
	if (n == 1)
		return 1;
	return n * factorial_ver2(n - 1);
}
// n = 5
// 5 * factorial_ver2(4)
// 5 * 4 * factorial_ver2(3)
// 5 * 4 * 3 * factorial_ver2(2)
// ...

int combination(int x, int y) { // combination �Լ� ����  ( �Լ� �ӿ� �Լ� ��� ����)
	return factorial(x) / (factorial(x - y) * factorial(y));
}