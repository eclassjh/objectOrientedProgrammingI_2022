#include <iostream>
using namespace std;
constexpr int SIZE = 9;

int seq_search(int list[], int n, int key);

int main() {
	int key, grade[SIZE] = { 9,8,7,6,5,4,3,2,1 };
	cout << "Ž���� ���� �Է��Ͻÿ� : ";
	cin >> key;
	cout << "Ž����� = " << seq_search(grade, SIZE, key) +1 << "��°" << endl;
	return 0;
}

int seq_search(int list[], int n, int key) {
	for (int i = 0; i < n; ++i)
		if (list[i] == key)
			return i;
	return -2; 
}


