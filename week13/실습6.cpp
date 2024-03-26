#include <iostream>
#include <fstream> // file stream
#include <string>
#include <sstream>

using namespace std;

void main() {

	ofstream a; // write용
	char fname[100];
	int sid, count = 0;
	char name[20];
	float score, total = 0.0;

	cout << "enter the score file name : " << endl;
	cin >> fname;
	a.open(fname);

	if (a.is_open()) { // fname이라는 이름의 file a에 sid, name, score 입력하는 코드
		while (1) {
			cout << "enter the sid, name, score : " << endl;
			cin >> sid;
			if (sid < 0) break;
			cin >> name >> score;
			a << sid << " " << name << " " << score << endl;
		}
	}
	a.close();

	ifstream aa; // read용
	string line;
	aa.open(fname); // 위에 새로 만들어진 file과 동일한 file
	if (aa.is_open()) {
		while (1) {
			getline(aa, line); // line : '1 kim 90'
			stringstream ss(line); // stringstream에 line을 보내고
			ss.str(line); // 형변환(?) // line 한개를 분할해줌 // '1', 'kim' ,'90' // 35-36은 그렇구나 ~하기 
			string name;
			int num, score;

			ss >> num >> name >> score; // 그 각각이 num, name, score이라는 뜻

			if (aa.eof()) break; // 파일의 마지막이면 break
			total = total + score;
			count++; // 사람 수 세기
		}
	}
	cout << "average : " << total / count << endl;
	aa.close();
}

