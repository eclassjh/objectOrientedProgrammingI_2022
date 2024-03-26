#include <iostream>
using namespace std;

// without arguments / with return value

int N = 1000; // 전역변수

int cal_sum() {
	int s = 0;
	for (int i = 0; i <= N; i++) {
		s += i;
	}
	return s;
}

void main() {
	int sum = cal_sum();
	cout << "sum of first " << N << " natural number is " << sum << endl;
}
