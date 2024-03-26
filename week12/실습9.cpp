#include <iostream>
using namespace std;

struct date { // ��, ��, �� ���� ������ ���� struct date ����
	int month, day, year;
};

struct student { // ID, �̸�, Ű ������ date struct�� pointer�� ���� ���� dob�� ���� struct student ����
	int number;
	char name[20];
	double height;
	struct date* dob;
};

struct student2 { // ID, �̸�, Ű ������ date struct�� ���� ���� dob�� ���� struct student2 ����
	int number;
	char name[20];
	double height;
	struct date dob;
};

int main() {	
	date d = { 3, 18, 2001 };
	student s = { 20070001, "Lee", 164.8 };
	student2 s2 = { 20070001, "Lee", 164.8 };
	
	s.dob = &d; // student �� pointer ���� dob�� d�� �ּ� binding  // call by reference
	s2.dob = d; // student2 �� ���� dob�� d�� �� binding // call by value

	cout << "SID : " << s.number << endl;
	cout << "Name : " << s.name << endl;
	cout << "Height : " << s.height << endl;
	cout << "B-Day : " << s.dob->year << " " << s.dob->month << " " << s.dob->day << endl; // call by reference�� ��� ��� 1
	cout << "B-Day : " << (*s.dob).year << " " << (*s.dob).month << " " << (*s.dob).day << endl; // call by reference�� ��� ��� 2

	cout << "--------------------------------------------" << endl;
	cout << "SID : " << s2.number << endl;
	cout << "Name : " << s2.name << endl;
	cout << "Height : " << s2.height << endl;
	cout << "B-Day : " << s2.dob.year << " " << (s2.dob).month << " " << (s2.dob).day << endl; // call by value�� ��� ��� 1

	return 0;
}
