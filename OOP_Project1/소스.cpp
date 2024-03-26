#include <iostream>
#include <cmath> // C++ sqrt 함수 사용을 위한 헤더파일
using namespace std;

#define SIZE 11 // List의 변수 개수

void main() {
	float x[SIZE] = { 34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15 }; // List x,y 선언
	float y[SIZE] = { 102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65 };

	float s_x = 0, s_y = 0, s_xy = 0, s_x2 = 0, s_y2 = 0; // 각 시그마별 합 변수 선언 및 초기화

	for (int i = 0; i < SIZE; i++) // 반복문을 이용한 시그마의 계산
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
	// r 변수 계산

	cout << "r = " << r << endl;
	// r 변수 출력
}
