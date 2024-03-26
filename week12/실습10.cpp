#include <iostream>
using namespace std;

struct student {  // ID, �̸�, Ű ������ student struct ��ü�� pointer�� ���� ���� next�� ���� struct student ����
	int number;
	char name[10];
	double height;
	struct student* next;
};

int main() {
	student s1 = { 21, "Lee", 164.8, NULL }; // student struct s1�� �� ���� �Ҵ�, next struct �������� NULL ���� (����)
	student s2 = { 31, "Park", 179.1, NULL }; // student struct s2�� �� ���� �Ҵ�, next struct �������� NULL ���� (����)

	struct student* first = NULL; // student struct�� �����ͺ��� first ����, NULL ���� (����)
	struct student* current = NULL; // student struct�� �����ͺ��� current ����, NULL ���� (����)

	first = &s1; // ������ ���� first�� s1�� �ּҸ� binding
	s1.next = &s2; // s1 �� ������ ���� next�� s2�� �ּҸ� binding
	//s2.next = NULL;// s1 �� ������ ���� next�� NULL ���� (����)

	current = first; // current �� s1�� ���� ( s1�ּ�)
	while (current != NULL) // ������ ������ �̿��Ͽ� s1, s2�� ������� ����ϵ��� �ϴ� �ݺ��� ����
	{
		cout << "SID = " << current->number << "  Name = " << current->name << "  Height = " << current->height << endl << endl;
		current = current->next;
	}
}

