#include <iostream>
using namespace std;

union example {
	int i;
	char c;
};
int main()
{
	union example v1;
	union example v2;// union ��������

	v1.i = 100;
	cout << "v1.c : " << v1.c << " v1.i : " << v1.i << endl;
	v1.c = 'A';
	cout << "v1.c : " << v1.c << " v1.i : " << v1.i << endl;

	v2.i = 100;
	cout << "v2.c : " << v2.c << " v2.i : " << v2.i << endl;
	v2.c = 'B';
	cout << "v2.c : " << v2.c << " v2.i : " << v2.i << endl;

	v2.c = 'B';
	cout << "v2.c : " << v2.c << " v2.i : " << v2.i << endl;
	v2.i = 100;
	cout << "v2.c : " << v2.c << " v2.i : " << v2.i << endl;
}
// int�� char�� ����Ʈ ���� ���� �޸� �Ҵ翡�� ������ ���� ���� ��. �ٵ� �� �� �ߵ��� >?
