#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void get_random(int n) {
	int i;
	for (i = 0; i < n; i++) {
		cout << rand() << endl;
	}
}

int main() {
	srand((unsigned)time(NULL)); // �ð��� ���� seed ����
	cout << (unsigned)time(NULL) << endl;
	get_random(10);
}