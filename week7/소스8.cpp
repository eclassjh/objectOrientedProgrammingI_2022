#include <iostream>
#define SIZE 5
using namespace std;

int main() {
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,3,2,4,5 };

/* �̷��� ���ϸ� �ȵ�
	if(a=b)

	else 
		...
*/
	cout << a << endl; // a array�� �ּҰ��� ��ȯ��
	cout << b << endl; // b array�� �ּҰ��� ��ȯ��

	for (int i = 0; i < SIZE; i++)
	{
		if (a[i] != b[i])
		{
			cout << "a[" << i << "] != b[" << i << "]" << endl;
//			return 0;
		}
	}
	cout << "a[] = b[]" << endl;
}