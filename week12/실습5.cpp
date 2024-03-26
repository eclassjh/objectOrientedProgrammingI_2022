#include <iostream>
using namespace std;

void swap(int x, int y); // swap �Լ��� prototype ����

// call by value swap

int main() { 
	int a = 100, b = 200;

	cout << "main() a = " << a << ", b = " << b << endl; // �ٲٱ� �� a, b�� ���
	swap(a, b); // return���� ���� main�Լ����� ������ ���� ����
	cout << "main() a = " << a << ", b = " << b << endl; // �ٲ� �� a, b�� ���

	return 0;
}

void swap(int x, int y) { // �� ������ �޾� �� ���� �ٲ��ִ� �Լ� swap ����
	int tmp;
	cout << "before_swap() x = " << x << ", y = " << y << endl; // ���� x, y ��
	tmp = x;
	x = y;
	y = tmp;
	cout << "after_swap() x = " << x << ", y = " << y << endl; // �ٲ� �� x, y ��

}
