#include <iostream> // input output stream
#include <fstream> // file stream
using namespace std;

void main() {
	ofstream a;
	a.open("sample.txt"); // sample.txt 파일을 쓰기모드(w)로 open

	if (a.is_open()) { // open 성공시
		a << "input success";
		cout << "success" << endl;
	}

	else // open 실패시
		cout << "fail" << endl;

	a.close();

	system("pause");
}