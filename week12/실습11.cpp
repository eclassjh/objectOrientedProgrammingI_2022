#include <iostream>
using namespace std;

struct point { // ���� Ÿ�� ���� x, y �� ���� struct ����
	int x;
	int y;
};

int get_line_parameter(struct point p1, struct point p2, float* slope, float* yintercept)
// ����(slope)�� y����(y intercept)�� ����ϴ� �Լ� ����
{
	if (p1.x == p2.x) // �� ���� x���� ���ٸ� -1�� return
		return (-1);
	else
	{
		*slope = (float)(p2.y - p1.y) / (float)(p2.x - p1.x);
		// slope (����)�� ����Ͽ� slope ������ �ּҿ� ���� (return)
		*yintercept = p1.y - (*slope) * p1.x; 
		// yintercept(y����)�� ��갡�� yintercept ������ �ּҿ� ���� (return)
		return (0);
	}
}

int main(void)
{
	struct point pt1 = { 3, 3 }, pt2 = { 6, 6 }; // �� �� (3,3), (6,6) ����
	float s, y;
	if (get_line_parameter(pt1, pt2, &s, &y) == -1) // return���� -1 �̶��
		cout << "error: same x axis." << endl; // �� ���� x���� ������ ���
	else
		cout << "Gradient is " << s << ", y - intercept is " << y << endl; // �� ���� ��� �ᱣ�� ���
	
	return 0;
}
