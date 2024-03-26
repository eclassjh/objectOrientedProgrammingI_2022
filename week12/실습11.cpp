#include <iostream>
using namespace std;

struct point { // 정수 타입 변수 x, y 를 가진 struct 정의
	int x;
	int y;
};

int get_line_parameter(struct point p1, struct point p2, float* slope, float* yintercept)
// 기울기(slope)와 y절편(y intercept)을 계산하는 함수 정의
{
	if (p1.x == p2.x) // 두 점의 x값이 같다면 -1을 return
		return (-1);
	else
	{
		*slope = (float)(p2.y - p1.y) / (float)(p2.x - p1.x);
		// slope (기울기)를 계산하여 slope 변수의 주소에 저장 (return)
		*yintercept = p1.y - (*slope) * p1.x; 
		// yintercept(y절편)을 계산가여 yintercept 변수의 주소에 저장 (return)
		return (0);
	}
}

int main(void)
{
	struct point pt1 = { 3, 3 }, pt2 = { 6, 6 }; // 두 점 (3,3), (6,6) 정의
	float s, y;
	if (get_line_parameter(pt1, pt2, &s, &y) == -1) // return값이 -1 이라면
		cout << "error: same x axis." << endl; // 두 점의 x값이 같음을 출력
	else
		cout << "Gradient is " << s << ", y - intercept is " << y << endl; // 그 외의 경우 결괏값 출력
	
	return 0;
}
