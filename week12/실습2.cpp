#include <iostream>
using namespace std;

int main() {
	int a[] = { 10,20,30,40,50 }; // int type �迭 a ����
	
	cout << "a = " << a << endl; // �迭 a�� �ּҰ� ���
	cout << "&a[1] = " << &a[1] << endl; // �� ��° ������ �ּڰ� ���
	cout << "a + 1 = " << a+1 << endl; // �� ��° ������ �ּڰ� ���
	cout << "*a = " << *a << endl; // *a �� ���� �迭�� ù��° ������ �� ���
	cout << "*(a + 1) = " << *(a + 1) << endl; // �� ��° ������ �� ���

	return 0;
}
