#include <iostream>
using namespace std;

#define STUDENTS 5 // symbolic
//const int STUDENTS = 5;

int main() {
	int grade[STUDENTS];
	int sum = 0;
	int i;

	for (i = 0; i < STUDENTS; i++) {
		cout << i+1 << "��° �л� ���� �Է� : " << endl;
		cin >> grade[i];
		sum += grade[i];
	}
	float average = (float)sum / STUDENTS;
	cout << "Average score = " << average << endl;
	return 0;
}