#include <iostream>
using namespace std;

struct student {  // ID, 이름, 키 변수와 student struct 자체를 pointer로 받은 변수 next를 가진 struct student 정의
	int number;
	char name[10];
	double height;
	struct student* next;
};

int main() {
	student s1 = { 21, "Lee", 164.8, NULL }; // student struct s1의 각 값에 할당, next struct 변수에는 NULL 대입 (공란)
	student s2 = { 31, "Park", 179.1, NULL }; // student struct s2의 각 값에 할당, next struct 변수에는 NULL 대입 (공란)

	struct student* first = NULL; // student struct의 포인터변수 first 정의, NULL 대입 (공란)
	struct student* current = NULL; // student struct의 포인터변수 current 정의, NULL 대입 (공란)

	first = &s1; // 포인터 변수 first와 s1의 주소를 binding
	s1.next = &s2; // s1 속 포인터 변수 next와 s2의 주소를 binding
	//s2.next = NULL;// s1 속 포인터 변수 next에 NULL 대입 (공란)

	current = first; // current 에 s1값 대입 ( s1주소)
	while (current != NULL) // 포인터 변수를 이용하여 s1, s2를 순서대로 출력하도록 하는 반복문 정의
	{
		cout << "SID = " << current->number << "  Name = " << current->name << "  Height = " << current->height << endl << endl;
		current = current->next;
	}
}

