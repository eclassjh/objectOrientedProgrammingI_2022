#include <iostream>
#include <string> // struct 속 문자형 형식에서 바로 대입할 수 있도록 헤더파일 선언
using namespace std;

struct student { // 학생의 성적을 한번에 입력받을 수 있는 struct 구조체 student 선언
	char name[10]; // 학생의 이름을 입력받을 문자열 name 선언
	int id, age; // id와 나이를 입력받을 수 있는 정수형 변수 선언
	char sex; // 성별을 입력받을 수 있는 문자형 변수 선언
	int korean, english, math; // 구조체 안에 국어, 영어, 수학 성적과 총합값을 저장하는 정수형 변수 선언
	int total;
	};

int main() {
	struct student student1, student2, student3; // 정보를 입력받을 학생 3명 struct 선언 // struct 없어도 됨

	// student1의 이름, ID, 나이, 성별을 각각 사용자에게 입력받아 대입
	cout << "Enter student name, ID, age, sex(M for man, F for woman), and scores for 3 students : " << endl;
	cout << "student1 - Name : " << endl;
	cin >> student1.name;
	cout << "student1 - ID : " << endl;
	cin >> student1.id;
	cout << "student1 - age : " << endl;
	cin >> student1.age;
	cout << "student1 - sex (M or F) : " << endl;
	cin >> student1.sex;
	// student 1의 struct 속 각 변수에 사용자에게 입력받은 값 대입, total값 계산하여 입력
	cout << "student1 - Korean : " << endl;
	cin >> student1.korean;
	cout << "student1 - English : " << endl;
	cin >> student1.english;
	cout << "student1 - Math : " << endl;
	cin >> student1.math;
	student1.total = student1.korean + student1.english + student1.math;

	// student2의 이름, ID, 나이, 성별을 각각 사용자에게 입력받아 대입
	cout << "student2 - Name : " << endl;
	cin >> student2.name;
	cout << "student2 - ID : " << endl;
	cin >> student2.id;
	cout << "student2 - age : " << endl;
	cin >> student2.age;
	cout << "student2 - sex (M or F) : " << endl;
	cin >> student2.sex;
	cout << "student2 - Korean : " << endl;
	// student 2의 struct 속 각 변수에 사용자에게 입력받은 값 대입, total값 계산하여 입력
	cin >> student2.korean;
	cout << "student2 - English : " << endl;
	cin >> student2.english;
	cout << "student2 - Math : " << endl;
	cin >> student2.math;
	student2.total = student2.korean + student2.english + student2.math;

	// student3의 이름, ID, 나이, 성별을 각각 사용자에게 입력받아 대입
	cout << "student3 - Name : " << endl;
	cin >> student3.name;
	cout << "student3 - ID : " << endl;
	cin >> student3.id;
	cout << "student3 - age : " << endl;
	cin >> student3.age;
	cout << "student3 - sex (M or F) : " << endl;
	cin >> student3.sex;
	// student 3의 struct 속 각 변수에 사용자에게 입력받은 값 대입, total값 계산하여 입력
	cout << "student3 - Korean : " << endl;
	cin >> student3.korean;
	cout << "student3 - English : " << endl;
	cin >> student3.english;
	cout << "student3 - Math : " << endl;
	cin >> student3.math;
	student3.total = student3.korean + student3.english + student3.math;


	// 입력받은 값 출력
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