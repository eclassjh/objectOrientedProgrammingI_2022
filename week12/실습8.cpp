#include <iostream>
using namespace std;


struct student { // struct student ����
	int number;
	char name[20];
	double height;
};

int main() {
	student s = { 20070001, "ȫ�浿", 180.2 };
	student* p;
	p = &s; // struct s�� ������ ���� p binding

	cout << "�й� = " << s.number << ", �̸� = " << s.name << ", Ű = " << s.height << endl;
	cout << "�й� = " << (*p).number << ", �̸� = " << (*p).name << ", Ű = " << (*p).height << endl;
	cout << "�й� = " << p->number << ", �̸� = " << p->name << ", Ű = " << p->height << endl;
	// �� 3���� ��� ��� ��°��� ������

	return 0;
}

