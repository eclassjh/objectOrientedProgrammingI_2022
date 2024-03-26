#include <iostream>

using namespace std;

#pragma pack(2) //2, 4, 8, 16 으로 바꿔가면서 ㄱㄱ
#pragma pack(show)

struct student {
	int type; //4byte
	char id[15]; //15
	char name[10]; //10
	double height; //8
};

int main() {
	student s;
	cout << sizeof(s) << endl; // 38
	cout << &s.type << endl;
	cout << &s.id << endl;
	cout << &s.name << endl;
	cout << &s.height << endl;
	system("pause");
	return 0;
}