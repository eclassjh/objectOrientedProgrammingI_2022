#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE = 6;

int main() {
	int freq[SIZE] = { 0 }; // 6ĭ¥�� �迭�� ��� 0 ����
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 10000; i++) // 10000�� �ݺ�
		++freq[rand() % 6]; // ������ ���� �ش� �������� ����� ���Դ���
	cout << "============" << endl;
	cout << "  ��  ��   " << endl;
	cout << "============" << endl;
	for (i = 0; i < SIZE; i++)
		cout << " " << setw(3) << i + 1 << "  " << setw(3) << freq[i] << endl;
	return 0;
}