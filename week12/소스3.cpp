#include <iostream>
using namespace std;

struct point {
	int x;
	int y;
};

int get_line_parameter(struct point p1, struct point p2, float* slope, float* yintercept)
{
	if (p1.x == p2.x)
		return (-1);
	else
	{
		*slope = (float)(p2.y - p1.y) / (float)(p2.x - p1.x);
		*yintercept = p1.y - (*slope) * p1.x;
		return (0);
	}
}
int main(void)
{
	struct point pt1 = { 3, 3 }, pt2 = { 6, 6 };
	float s, y;
	if (get_line_parameter(pt1, pt2, &s, &y) == -1)
		cout << "error : same x axis." << endl;
	else
		cout << "Gradient : " << s << endl;
		cout << "y - intercept : " << y << endl;

}
