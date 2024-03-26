#include <iostream>
using namespace std;

int main() {
	char c = 'A';
	int i = 10000;
	double d = 6.78;

	char* pc = &c; // char type ���� 'c'�� �޴� ������ pc ����
	int* pi = &i; // int type ���� 'i'�� �޴� ������ pi ����
	double* pd = &d; // double type ���� 'd'�� �޴� ������ pd ����

	(*pc)++; // c�� + 1 : ASCII(A) + 1 = ASCII(B)
	*pi = *pi + 1; // i�� + 1 : 1000 + 1 = 1001
	*pd += 1; // d�� + 1 : 6.78 + 1 = 7.78

	cout << c << endl;
	cout << i << endl;
	cout << d << endl;
}

