#include <iostream>
using namespace std;

int main() {
	int a[] = { 10,20,30,40,50 }; // int type �迭 a ����
	int* p; // ������ p ����
	p = a; // p�� a binding

	cout << "a = " << a << ", p = " << p << endl << endl;
	cout << "a[0] = " << a[0] << "  a[1] = " << a[1] << "  a[2] = " << a[2] << endl;
	cout << "p[0] = " << p[0] << "  p[1] = " << p[1] << "  p[2] = " << p[2] << endl << endl;
	// ���� ���� �������� Ȯ��

	p[0] = 60;
	p[1] = 70;
	p[2] = 80;
	// a�� p�� �ּҰ� ���� ������ a���� �Բ� �ٲ�

	cout << "a[0] = " << a[0] << "  a[1] = " << a[1] << "  a[2] = " << a[2] << endl;
	cout << "p[0] = " << p[0] << "  p[1] = " << p[1] << "  p[2] = " << p[2] << endl << endl;
	// �����ϰ� �ٲ��� Ȯ��

	return 0;
}

