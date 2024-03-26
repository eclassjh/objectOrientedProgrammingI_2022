#include <iostream>
#include <cmath> // C++ sqrt 함수 사용을 위한 헤더파일
using namespace std;

#define SIZE 10 // List의 변수 개수

float arraysum_onedim(float a[SIZE]);
float arraysum_twodim(float a[SIZE], float b[SIZE]);

void main() {
	float x[SIZE] = { 3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0 }; // List x,y 선언
	float y[SIZE] = { 1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0};

	float a = 0, b;
	b = (SIZE * arraysum_twodim(x, y) - arraysum_onedim(x) * arraysum_onedim(y)) / (SIZE * arraysum_twodim(x, x) - arraysum_onedim(x) * arraysum_onedim(x));
	
	for (int i = 0; i < SIZE; i++)
		a += y[i] - b * x[i];
	a /= SIZE;
	cout << a << endl << b << endl;
	cout << "y = " << a << " + " << b << "x" << endl;
}

float arraysum_onedim(float a[SIZE]) {
	float sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += a[i];
	return sum;
}

float arraysum_twodim(float a[SIZE], float b[SIZE]) {
	float sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += a[i] * b[i];
	return sum;
}