#include <iostream>
using namespace std;

struct date { // 월, 일, 년 정수 변수를 가진 struct date 정의
	int month, day, year;
};

struct student { // ID, 이름, 키 변수와 date struct를 pointer로 받은 변수 dob를 가진 struct student 정의
	int number;
	char name[20];
	double height;
	struct date* dob;
};

struct student2 { // ID, 이름, 키 변수와 date struct를 받은 변수 dob를 가진 struct student2 정의
	int number;
	char name[20];
	double height;
	struct date dob;
};

int main() {	
	date d = { 3, 18, 2001 };
	student s = { 20070001, "Lee", 164.8 };
	student2 s2 = { 20070001, "Lee", 164.8 };
	
	s.dob = &d; // student 의 pointer 변수 dob에 d의 주소 binding  // call by reference
	s2.dob = d; // student2 의 변수 dob에 d의 값 binding // call by value

	cout << "SID : " << s.number << endl;
	cout << "Name : " << s.name << endl;
	cout << "Height : " << s.height << endl;
	cout << "B-Day : " << s.dob->year << " " << s.dob->month << " " << s.dob->day << endl; // call by reference의 출력 방법 1
	cout << "B-Day : " << (*s.dob).year << " " << (*s.dob).month << " " << (*s.dob).day << endl; // call by reference의 출력 방법 2

	cout << "--------------------------------------------" << endl;
	cout << "SID : " << s2.number << endl;
	cout << "Name : " << s2.name << endl;
	cout << "Height : " << s2.height << endl;
	cout << "B-Day : " << s2.dob.year << " " << (s2.dob).month << " " << (s2.dob).day << endl; // call by value의 출력 방법 1

	return 0;
}
