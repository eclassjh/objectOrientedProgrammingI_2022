// ���ݺ��� pointer

#include <iostream>
using namespace std;

int main() {

	int n = 10;
	int* pn = &n; // binding ��. ���� ���� ��.
	// ������ ���� pn�� ���� n�� �ּҸ� binding ��

	cout <<"address : "<<  pn << ", value : "<< *pn << endl;
	// pn�� pointer ����, �տ� '*' �� �ٿ� �ش� �ּ� �� ������ �����
	cout << "address : " << &n << ", value : " << n << endl;
	// n�� �Ϲ� ����, �տ� '&'�� �ٿ� �ش� ������ �ּҸ� �����
	// ���� ��°� ������

	n = 100;
	cout << "address : " << pn << ", value : " << *pn << endl;
	// &n�� pn�� binding �Ǿ��־� n ���� �ٲٴ��� pn�� ���� ���� �ٲ�
	*pn = 1000;
	cout << "address : " << &n << ", value : " << n << endl; 
	// ���� �ݴ��� ��쿡�� ������
	
	system("pause"); // ����� �Ͻ�����
}

