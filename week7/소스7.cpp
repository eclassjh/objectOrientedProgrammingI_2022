#include <iostream>
#define SIZE 5
using namespace std;

int main() {
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE];
	int i;

	cout << "a �迭�� ���" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << endl;

	cout << "b �迭�� ���" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << "b[" << i << "] = " << b[i] << endl;

	for (i = 0; i < SIZE; i++)
		b[i] = a[i];

	cout << "a �迭�� ���" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << endl;

	cout << "�ٲ� b �迭�� ���" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << "b[" << i << "] = " << b[i] << endl;
}