# include <iostream>
using namespace std;

int main() {
	int number, i;
	
	for (;;) {
		cout << "숫자를 입력하세요" << endl;
		cin >> number;

		i = number % 2;

		switch (i) {
		case 1:
			cout << "홀수입니다" << endl;
			break;
		case 0:
			cout << "짝수입니다" << endl;
			break;
		}
	}

}