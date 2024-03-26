#include <iostream>
using namespace std;

struct ex {
	int a[100];
};

int main() {
	ex e;
	cout << sizeof(&e) << endl;
	cout << sizeof(e) << endl;

	system("pause");

}