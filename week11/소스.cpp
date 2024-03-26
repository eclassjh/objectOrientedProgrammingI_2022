      #include <iostream>

using namespace std;

#pragma pack(1)
#pragma pack(show)

struct student {
	int type; //4byte
	char id[15]; //15
	char name[10]; //10
	double height; //8
	};

int main() {
	student s;
	cout << sizeof(s) << endl; // 37
	system("pause");
	return 0;

}