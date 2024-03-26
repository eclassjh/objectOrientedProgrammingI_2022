#include <iostream>
#include <fstream> // file stream
#include <string>
#include <sstream>

using namespace std;

void main() {

	ofstream a; // write��
	char fname[100];
	int sid, count = 0;
	char name[20];
	float score, total = 0.0;

	cout << "enter the score file name : " << endl;
	cin >> fname;
	a.open(fname);

	if (a.is_open()) { // fname�̶�� �̸��� file a�� sid, name, score �Է��ϴ� �ڵ�
		while (1) {
			cout << "enter the sid, name, score : " << endl;
			cin >> sid;
			if (sid < 0) break;
			cin >> name >> score;
			a << sid << " " << name << " " << score << endl;
		}
	}
	a.close();

	ifstream aa; // read��
	string line;
	aa.open(fname); // ���� ���� ������� file�� ������ file
	if (aa.is_open()) {
		while (1) {
			getline(aa, line); // line : '1 kim 90'
			stringstream ss(line); // stringstream�� line�� ������
			ss.str(line); // ����ȯ(?) // line �Ѱ��� �������� // '1', 'kim' ,'90' // 35-36�� �׷����� ~�ϱ� 
			string name;
			int num, score;

			ss >> num >> name >> score; // �� ������ num, name, score�̶�� ��

			if (aa.eof()) break; // ������ �������̸� break
			total = total + score;
			count++; // ��� �� ����
		}
	}
	cout << "average : " << total / count << endl;
	aa.close();
}

