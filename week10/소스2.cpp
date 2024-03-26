#include <iostream>

using namespace std;

struct student {
	int korean;
	int english;
	int math;
};

int main() {
	student x, y;
	x.korean = 80;
	x.english = 90;
	x.math = 70;

	cout << "x의 국영수 점수 : " << x.korean << x.english << x.math << endl;
	cout << "y의 국영수 점수를 순서대로 입력하세요 : " << endl;
	cin >> y.korean >> y.english >> y.math;
	cout << "y의 국영수 점수 : " << y.korean << y.english << y.math << endl;
}