# include <iostream>
using namespace std;

int main() {
	int number, i;
	
	for (;;) {
		cout << "���ڸ� �Է��ϼ���" << endl;
		cin >> number;

		i = number % 2;

		switch (i) {
		case 1:
			cout << "Ȧ���Դϴ�" << endl;
			break;
		case 0:
			cout << "¦���Դϴ�" << endl;
			break;
		}
	}

}