#include <iostream>
using namespace std;

int main() {
	int a[] = { 10,20,30,40,50 }; // int type �迭 a ����
	cout << "&a[0] = " << &a[0] << endl; // �� �迭�� �ּڰ� ���
	cout << "&a[1] = " << &a[1] << endl;
	cout << "&a[2] = " << &a[2] << endl;
	// �ּڰ��� 4�� �������� Ȯ�� (int type = 4 byte)
	cout << "a = " << a << endl;

	return 0;
}