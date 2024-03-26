#include <iostream>
using namespace std;

// n�� datatype�� double�� �ٲ㼭 �ּҰ� ���غ���
// 1�� ������ �� �ܼ��� 1��ŭ�� �ּҰ� Ŀ���°� �ƴ϶� datatype��ŭ�� byte�� ���� Ŀ��

int main() {
	int n = 10;
	int* pn = &n; // binding ��. pn = n�� �ּ�

	int m = 10;
	int* pm = &m; // binding ��. pm = m�� �ּ�

	(*pn)++; // pn�� ���� + 1 ( = n + 1 )
	*pm += 1; // pm�� ���� + 1 ( = m + 1 )

	cout << "n = " << n << endl; // n = 11
	cout << "m = " << m << endl; // n = 11
	
	cout << pn << ", " << *pn << endl; // pn(n�� �ּڰ�) ���
	cout << ++pn << endl; // pn���� 1 ���� �ּڰ� ��� (n�� int type -> 4��ŭ ����)
	// Binding ���� ??
	
	cout << *(pn++) << endl; // �����Ⱚ ��� (������ �� ���� ����)
	cout << pn << endl;

	cout << &n << endl;

}

