# include <iostream>
using namespace std;

int main() {
	int i;

	for (;;) {
		cout << "���ڸ� �Է��ϼ���" << endl;
		cin >> i;

		i %= 2;

		switch (i) {
		case 1:
			cout << "Ȧ���Դϴ�" << endl;
			break;
		default:
			cout << "¦���Դϴ�" << endl;
			break;
		}
	}

}