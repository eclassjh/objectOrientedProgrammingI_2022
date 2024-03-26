#include <iostream>
using namespace std;

union example {
	int i;
	char c;
};
int main()
{
	union example v1;
	union example v2;// union 생략가능

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
// int와 char의 바이트 수에 따라 메모리 할당에서 쓰레기 값이 들어가야 됨. 근데 왜 난 잘되지 >?
