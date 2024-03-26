# include <iostream>
using namespace std;

int main() {
	int i;

	for (;;) {
		cout << "숫자를 입력하세요" << endl;
		cin >> i;

		i %= 2;

		switch (i) {
		case 1:
			cout << "홀수입니다" << endl;
			break;
		default:
			cout << "짝수입니다" << endl;
			break;
		}
	}

}