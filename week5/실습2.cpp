#include <iostream>
using namespace std;

// function prototype : �Լ��� main���� �ؿ� ������ �Ʒ��� �ִٰ� ǥ���ϴ� ��
int add(int a, int b);
int square(int a);

void main() {
/*	int x = 1, y = 2, z;
	z = add(x, y);
	cout << "x�� y�� ���� " << z << "�Դϴ�." << endl;
	*/
	int x = 101, z;
	z = square(x);
	cout << "Square x is " << z << endl;

}

int add(int a, int b) { // add �Լ� ����
	return(a + b);
}

int square(int a) { // square �Լ� ����
	return (a * a);
}