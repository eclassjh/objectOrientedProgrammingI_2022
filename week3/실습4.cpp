#include <iostream>

using namespace std;

int main() {
	char x; // x (char) : -128 ~ 127 �� �����
	
	for (x = 0; x < 127; x++) { // x ������ x < 127�� ���� , �̺��� ������ Ŭ ��� ���� loop �߻�
		cout << "ASCII Value : " << int(x) << ", Character : " << x << endl;
	}
	return 0;
} 