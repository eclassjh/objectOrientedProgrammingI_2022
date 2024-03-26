#include <iostream>
using namespace std;

int main() {
	int grade[] = { 1,2,3,4,5,6 };
	int size = sizeof(grade) / sizeof(grade[0]);

	cout << "배열사이즈 : " << sizeof(grade) << endl << "index 한 개의 사이즈 : " << sizeof(grade[0]) << endl;

	for (int i = 0; i < size; i++)
		cout << grade[i] << endl;

	cout << endl;
	cout << "배열의 값 개수 : " << size << endl;
}