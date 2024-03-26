#include <iostream>
#include <string>
using namespace std;


struct book {
	int number;
	char title[30];
};

int main(){
	struct book* p;
	p = new book[2];

	if (p == NULL) {
		cout << "메모리 할당 오류" << endl;
		exit(1);
	}

	p->number = 1;
	strcpy_s(p->title, "C/C++ Programming");
	cout << p << endl;
	(p+1)->number = 2;
	strcpy_s((p+1)->title, "Data Structure");
	cout << p + 1 << endl;

	cout << p->number << endl;
	cout << p->title << endl;
	cout << (p + 1)->number << endl;
	cout << (p + 1)->title << endl;

	delete[] p;

}