// Ex2 : symbolic constant

#include <iostream>
// #define PI 3.141592 // symbolic constant ���1
const float PI = 3.141592 ; // symbolic constant ���2

using namespace std;

int main() {
	float radius, area, circumference;

	cout << "inser the radius" << endl;
	cin >> radius;

	area = PI * radius * radius;
	circumference = 2.0 * PI * radius ;

	cout << "radius = " << radius << endl;
	cout << "circle area = " << area << ", circumference = " << circumference << endl;

}