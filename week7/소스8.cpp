#include <iostream>
#define SIZE 5
using namespace std;

int main() {
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,3,2,4,5 };

/* 이렇게 비교하면 안됨
	if(a=b)

	else 
		...
*/
	cout << a << endl; // a array의 주소값이 반환됨
	cout << b << endl; // b array의 주소값이 반환됨

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