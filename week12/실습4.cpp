#include <iostream>
using namespace std;

void sub(int* p); // sub�Լ� prototype ����

int main() {
	int i = 100;

	cout << "i = " << i << endl;
	sub(&i); // call by reference
	// i�� ������ ������ sub�Լ��� ����
	cout << "i = " << i << endl;

	return 0;
}

void sub(int* p) { // sub�Լ� ���Ǻ�
	*p = 200; // ������ ������ �޾� �� ���� 200���� ��ȯ�����ִ� �Լ�
}

