#include <iostream>
#define SIZE 5
using namespace std;

int main() {
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE];
	int i;

	cout << "a 배열값 출력" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << endl;

	cout << "b 배열값 출력" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << "b[" << i << "] = " << b[i] << endl;

	for (i = 0; i < SIZE; i++)
		b[i] = a[i];

	cout << "a 배열값 출력" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << endl;

	cout << "바뀐 b 배열값 출력" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << "b[" << i << "] = " << b[i] << endl;
}