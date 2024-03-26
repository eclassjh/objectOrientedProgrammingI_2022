#include <iostream>
using namespace std;
const int SIZE = 10;

void print_list(int list[], int n);
void selection_sort(int list[], int n);


int main() {
	int grade[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };
	cout << "������ �迭 ���"<< endl;
	print_list(grade, SIZE);


	selection_sort(grade, SIZE);

	cout << endl << "���ĵ� �迭" << endl;
	print_list(grade, SIZE);

	return 0;
}

// list ���
void print_list(int list[], int n) {
	for (int i = 0; i < n; i++) {
		cout << list[i] << "  ";
//		cout << endl;
	}
}

//�������� ����
void selection_sort(int list[], int n) {
		for (int i = 0; i < n - 1; i++) {
			int least = i;
			for (int j = i + 1; j < n; j++)
				if (list[j] < list[least])
					least = j;
			int temp = list[i];
			list[i] = list[least];
			list[least] = temp;
		}
	}