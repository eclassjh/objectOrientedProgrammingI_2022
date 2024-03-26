#include <iostream>

using namespace std;

#define STU_NUMBER 1
#define REG_NUMBER 2

struct student {
	int type;
	char name[20];
	union{
		int stu_number; // Student ID (SID)
		char reg_number[15]; // Registration ID (RID)
	} id;
};
void print(struct student s) {
	switch(s.type){
	case STU_NUMBER:
		cout << "SID : " << s.id.stu_number << endl;
		break;
	case REG_NUMBER:
		cout << "RID : " << s.id.reg_number << endl;
		break;
	default :
		cout << "Type Error !";
		break;
	}
}

int main()
{
	struct student s1, s2;
	s1.type = STU_NUMBER; // 1
	s1.id.stu_number = 20070001;
	strcpy(s1.name, "Hong");

	s2.type = REG_NUMBER; // 2
	strcpy(s2.id.reg_number, "860101-1058031");
	strcpy(s2.name, "Kim");

	print(s1);
	print(s2);

	return 0;
}