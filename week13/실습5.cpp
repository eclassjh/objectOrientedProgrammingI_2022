#include <iostream> // input output stream
#include <fstream> // file stream
using namespace std;

void main() {
	ofstream a;
	a.open("sample.txt"); // sample.txt ������ ������(w)�� open

	if (a.is_open()) { // open ������
		a << "input success";
		cout << "success" << endl;
	}

	else // open ���н�
		cout << "fail" << endl;

	a.close();

	system("pause");
}