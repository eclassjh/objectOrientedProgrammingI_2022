#include <iostream>
const int SIZE = 5;
using namespace std;

int main() {
	int data[SIZE]; // 5ĭ¥�� �迭 data ����
	int i;
	
	for (i = 0; i < SIZE; i++) { // SIZE ������ŭ ���� �Է�
		cout << i+1 <<"��° ������ �Է��Ͻÿ� : ";
		cin >> data[i];
	}

	for (i = SIZE - 1; i >= 0; i--) { // �迭 �� �������� ���ʷ� ���
		cout << data[i] << endl;
	}
	return 0;
}