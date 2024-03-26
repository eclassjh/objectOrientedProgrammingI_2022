#include <iostream>
#include <cmath> // C++ sqrt �Լ� ����� ���� �������
using namespace std;

#define SIZE 11 // List�� ���� ����

void main() {
	float x[SIZE] = { 34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15 }; // List x,y ����
	float y[SIZE] = { 102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65 };

	float s_x = 0, s_y = 0, s_xy = 0, s_x2 = 0, s_y2 = 0; // �� �ñ׸��� �� ���� ���� �� �ʱ�ȭ

	for (int i = 0; i < SIZE; i++) // �ݺ����� �̿��� �ñ׸��� ���
		s_x += x[i];

	for (int i = 0; i < SIZE; i++)
		s_y += y[i];

	for (int i = 0; i < SIZE; i++)
		s_xy += x[i] * y[i];

	for (int i = 0; i < SIZE; i++)
		s_x2 += x[i] * x[i];

	for (int i = 0; i < SIZE; i++)
		s_y2 += y[i] * y[i];

	double r = (SIZE * s_xy - s_x * s_y) / (sqrt((SIZE * s_x2 - s_x * s_x) * (SIZE * s_y2 - s_y * s_y)));
	// r ���� ���

	cout << "r = " << r << endl;
	// r ���� ���
}
