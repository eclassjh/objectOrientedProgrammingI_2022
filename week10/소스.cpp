#include <iostream>
#include <string>
using namespace std;

struct student {
	int number;
	//char name[10];
	// string ��� �߰��ؼ� �̰͵� ������
	string name; // => string �������� ����Ǹ� strcpy���� line 19 ����
	double height;

};

int main() {
	struct student s = { 1,"kim",178.9 }; // struct ���� ����

	// ��� 1 : �ϳ��ϳ� �����ϱ�
	s.number = 12210000; // ����
	s.name = "Lee"; // �����ϰ� �Ϸ��� string ������� �����ؾ���
//	strcpy(s.name, "Lee"); // strcpy ������ �ҽ����� -> �Ӽ� ��ó���� ����������� "_CRT_SECURE_NO_WARNINGS"
//	strcpy_s(s.name,sizeof(s.name), "kim");
//16,17 �� �� �ϳ�

	// ��� 2: �ѹ��� �����ϱ�
	s = { 12210000, "�����", 170.2 };


	cout << "number : " << s.number <<  endl;
	cout << "name : " << s.name << endl;
	cout << "height : " << s.height << endl;
}