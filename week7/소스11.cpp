#include <iostream>
#include<iomanip>
using namespace std;
#define SIZE 7

void square_array(int a[], int size);
void square_element(int e);
void print_array(int a[], int size);

int main(void) {
	int list[SIZE] = { 1,2,3,4,5,6,7 };
	print_array(list, SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);
	cout << setw(3) << list[6] << endl;
	square_element(list[6]);
	cout << setw(3) << list[6] << endl;
	return 0;
}

void square_array(int a[], int size) {
	for (int i = 0; i < size; i++)
		a[i] = a[i] * a[i];
}

void square_element(int e) {
	e = e * e;
	cout << "square_element = " << e << endl;
}

void print_array(int a[], int size) {
	for (int i = 0; i < size; i++)
		cout << setw(3) << a[i] << endl;
}
