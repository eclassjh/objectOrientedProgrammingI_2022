#include <iostream>
#include <string> // struct �� ������ ���Ŀ��� �ٷ� ������ �� �ֵ��� ������� ����
using namespace std;

struct student { // �л��� ������ �ѹ��� �Է¹��� �� �ִ� struct ����ü student ����
	char name[10]; // �л��� �̸��� �Է¹��� ���ڿ� name ����
	int id, age; // id�� ���̸� �Է¹��� �� �ִ� ������ ���� ����
	char sex; // ������ �Է¹��� �� �ִ� ������ ���� ����
	int korean, english, math; // ����ü �ȿ� ����, ����, ���� ������ ���հ��� �����ϴ� ������ ���� ����
	int total;
	};

int main() {
	struct student student1, student2, student3; // ������ �Է¹��� �л� 3�� struct ���� // struct ��� ��

	// student1�� �̸�, ID, ����, ������ ���� ����ڿ��� �Է¹޾� ����
	cout << "Enter student name, ID, age, sex(M for man, F for woman), and scores for 3 students : " << endl;
	cout << "student1 - Name : " << endl;
	cin >> student1.name;
	cout << "student1 - ID : " << endl;
	cin >> student1.id;
	cout << "student1 - age : " << endl;
	cin >> student1.age;
	cout << "student1 - sex (M or F) : " << endl;
	cin >> student1.sex;
	// student 1�� struct �� �� ������ ����ڿ��� �Է¹��� �� ����, total�� ����Ͽ� �Է�
	cout << "student1 - Korean : " << endl;
	cin >> student1.korean;
	cout << "student1 - English : " << endl;
	cin >> student1.english;
	cout << "student1 - Math : " << endl;
	cin >> student1.math;
	student1.total = student1.korean + student1.english + student1.math;

	// student2�� �̸�, ID, ����, ������ ���� ����ڿ��� �Է¹޾� ����
	cout << "student2 - Name : " << endl;
	cin >> student2.name;
	cout << "student2 - ID : " << endl;
	cin >> student2.id;
	cout << "student2 - age : " << endl;
	cin >> student2.age;
	cout << "student2 - sex (M or F) : " << endl;
	cin >> student2.sex;
	cout << "student2 - Korean : " << endl;
	// student 2�� struct �� �� ������ ����ڿ��� �Է¹��� �� ����, total�� ����Ͽ� �Է�
	cin >> student2.korean;
	cout << "student2 - English : " << endl;
	cin >> student2.english;
	cout << "student2 - Math : " << endl;
	cin >> student2.math;
	student2.total = student2.korean + student2.english + student2.math;

	// student3�� �̸�, ID, ����, ������ ���� ����ڿ��� �Է¹޾� ����
	cout << "student3 - Name : " << endl;
	cin >> student3.name;
	cout << "student3 - ID : " << endl;
	cin >> student3.id;
	cout << "student3 - age : " << endl;
	cin >> student3.age;
	cout << "student3 - sex (M or F) : " << endl;
	cin >> student3.sex;
	// student 3�� struct �� �� ������ ����ڿ��� �Է¹��� �� ����, total�� ����Ͽ� �Է�
	cout << "student3 - Korean : " << endl;
	cin >> student3.korean;
	cout << "student3 - English : " << endl;
	cin >> student3.english;
	cout << "student3 - Math : " << endl;
	cin >> student3.math;
	student3.total = student3.korean + student3.english + student3.math;


	// �Է¹��� �� ���
	cout << "===========================" << endl;
	cout << "      The Score Report     " << endl;
	cout << "student 1 : " << student1.name << endl;
	cout << "ID number : " << student1.id << ", Age : " << student1.age << ", Sex : " << student1.sex << endl;
	cout << "Korean : " << student1.korean << ", English : " << student1.english << ", Math : " << student1.math << ", Total = "<< student1.total << endl;
	cout << "student 2 : " << student2.name << endl;
	cout << "ID number : " << student2.id << ", Age : " << student2.age << ", Sex : " << student2.sex << endl;
	cout << "Korean : " << student2.korean << ", English : " << student2.english << ", Math : " << student2.math << ", Total = " << student2.total << endl;
	cout << "student 3 : " << student3.name << endl;
	cout << "ID number : " << student3.id << ", Age : " << student3.age << ", Sex : " << student3.sex << endl;
	cout << "Korean : " << student3.korean << ", English : " << student3.english << ", Math : " << student3.math << ", Total = " << student3.total << endl;
	cout << "===========================" << endl;



}