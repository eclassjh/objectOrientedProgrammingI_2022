#include <iostream>

using namespace std;
int main() {
	int a[] = { 10, 20, 30, 40, 50 };
	cout << long long(a) << endl;
	cout << long long(a+1) << endl;
	cout << long long(a + 2) << endl;
	cout << long long(a + 3) << endl; // a�� int�� 4��, double�̸� 8�� Ŀ��
	cout << sizeof(& a[0]) << endl;
	cout << &a[0] << endl;
	cout << "�ּҰ� : " << sizeof(&a[0]) << endl; // sizeof : �迭 �־����� �� ī
	cout << &a[1] << endl;
	cout << "�ּҰ� : " << sizeof(&a[1]) << endl;
	cout << &a[2] << endl;
	cout << "�ּҰ� : " << sizeof(&a[2]) << endl;
	cout << &a[3] << endl;
	cout << "�ּҰ� : " << sizeof(&a[3]) << endl; // �ּ��� size�� �׻� fixed �� (datatype�� �ٲ� ������)
	cout << *a << endl;
	cout << *(a+1) << endl;
	cout << *a+1 << endl;

	system("pause");

}

