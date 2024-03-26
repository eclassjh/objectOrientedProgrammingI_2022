#include <iostream>

using namespace std;

int main() {
	int i = 0;
	int sum = 0;
	for (i = 0; i <= 100; i++) {
		sum += i;
		cout << "i = " << i << endl;
//		cout " sum = " << sum << endl;
	}
	cout << "sum = " << sum << endl;
	cout << i << endl; // for문 빠져나와서 한번 더 i가 더해지고 for문을 빠져나오기 때문에 i 제한값보다 1 커져있음. (i = 101)
	return 0;
}