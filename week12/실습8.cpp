#include <iostream>
using namespace std;


struct student { // struct student 정의
	int number;
	char name[20];
	double height;
};

int main() {
	student s = { 20070001, "홍길동", 180.2 };
	student* p;
	p = &s; // struct s와 포인터 변수 p binding

	cout << "학번 = " << s.number << ", 이름 = " << s.name << ", 키 = " << s.height << endl;
	cout << "학번 = " << (*p).number << ", 이름 = " << (*p).name << ", 키 = " << (*p).height << endl;
	cout << "학번 = " << p->number << ", 이름 = " << p->name << ", 키 = " << p->height << endl;
	// 위 3가지 방법 모두 출력값이 동일함

	return 0;
}

