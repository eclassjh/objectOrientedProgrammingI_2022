// 구조체 ' 배열 '

#include <iostream>
using namespace std;

#define SIZE 3

struct student {
	int number;
	char name[20];
	double height;
};

int main() {
	struct student list[SIZE];

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter the student ID : ";
		cin >> list[i].number;
		cout << "Enter the name : ";
		cin >> list[i].name;
		cout << "Enter the height (floating point) : ";
		cin >> list[i].height;
		cout << endl;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << "Student " << i + 1 << " : " << endl;
		cout << "SID : " << list[i].number << endl;
		cout << "Name : " << list[i].name << endl;
		cout << "Height : " << list[i].height << endl << endl;

	}
}