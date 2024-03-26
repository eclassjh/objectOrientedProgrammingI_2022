#include <iostream>
#include <string>

using namespace std;
#define STU_NUMBER 1
#define REG_NUMBER 2

struct student {
	int type; // int type 정의
	union { // union type 의 id 정의
		int sid;
		char rnum[15];
	} id;
	char name[10];
	double heigt;
};

void print(student s) { 
	switch (s.type)
	{
	case STU_NUMBER:
		cout << "SID : " << s.id.sid << endl;
		cout << "Name : " << s.name << endl;
		break;
	case REG_NUMBER:
		cout << "RID : " << s.id.rnum << endl;
		cout << "Name : " << s.name << endl;
		break;
	default:
		cout << "type error" << endl;
		break;
	}
}

int main(){
	student s1, s2; // struct 생략
	s1.type = STU_NUMBER;
	s1.id.sid = 22001111;
	strcpy(s1.name, "Hong");

	s2.type = REG_NUMBER;
//	s2.id.rnum = "860101-101039";
	 strcpy(s2.id.rnum, "860101-101039");
	strcpy(s2.name, "Kim");
	

	print(s1);
	print(s2);
}