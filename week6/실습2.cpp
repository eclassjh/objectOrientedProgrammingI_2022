#include <iostream>
using namespace std;

int N = 1000; // ��������
int cal_sum(); // prototype

void main() {
	int sum = cal_sum();
	cout << "sum of first " << N << " natural number is " << sum << endl;
}

int cal_sum() {
	int s = 0;
	for (int i = 0; i <= N; i++) {
		s += i;
	}
	return s;
}