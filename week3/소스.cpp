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
	cout << i << endl; // for�� �������ͼ� �ѹ� �� i�� �������� for���� ���������� ������ i ���Ѱ����� 1 Ŀ������. (i = 101)
	return 0;
}