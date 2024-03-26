#include <iostream>
#include <string> // struct �� ������ ���Ŀ��� �ٷ� ������ �� �ֵ��� ������� ����
using namespace std;

struct student { // �л� ���� �Է¿� �ʿ��� ���� ����
	char name[20];
	int id;
	char sex;
	int kor, eng, math;
};
void main() {
	struct student std[5]; // 5 students
	int mode; // 1~6�� mode �߿� ������ ���� �����ϴ� ����
	int i;

	int kor_max = 0, eng_max = 0, math_max = 0; // 3�� case���� ����ϱ� ���� ���� ����
	int a = 0, b = 0, c = 0;

	int id_in; // 6�� case���� ����ϱ� ���� ���� ����

	for(;;) // mode ���� ���� loop ����
	{
		cout << " Selct the mode. " << endl;
		cout << "1. Load   2. Show   3. Best score   4. Male students   5. Female students   6. Change " << endl;
		cin >> mode;

		switch (mode) {

		case 1: // Load ���� ��ȯ. �л��� data�� �Է¹���
			cout << "Enter data for 5 students (name id sex korean english math scores)" << endl;
			for (i = 0; i < 5; i++) { // read data for each student
				cout << "student " << i + 1 << endl;
				cin >> std[i].name;
				cin >> std[i].id;
				cin >> std[i].sex;
				cin >> std[i].kor;
				cin >> std[i].eng;
				cin >> std[i].math;
			}
			break;

		case 2: // Show ���� ��ȯ. �Է¹��� data�� �����
			cout << "now displaying the students : " << endl;
			for (i = 0; i < 5; i++) { // �ݺ����� ����Ͽ� �л����� ��� ������ �����
				cout << "student " << i << endl;
				cout << "name: " << std[i].name << " , student ID : " << std[i].id << " sex : " << std[i].sex << endl;
				cout << "kor score : " << std[i].kor << ", eng score : " << std[i].eng << "math score : " << std[i].math << endl;
			}
			break;

		case 3: // Best score ���� ��ȯ. �� ���� �ְ� ������ ����_max ������ �����ϰ� �ش��ϴ� �л��� ������ ���� a,b,c ������ ������
			for (i = 0; i < 5; i++) {
				if (std[i].kor > kor_max) {
					kor_max = std[i].kor;
					a = i;
				}
				if (std[i].eng > eng_max) {
					eng_max = std[i].eng;
					b = i;
				}
				if (std[i].math > math_max) {
					math_max = std[i].math;
					c = i;
				}
			}
			// �ݺ����� ���� ����� �ְ��� �ش��ϴ� �л����� �����
			cout << "Best Score for Korean : " << a << ", " << kor_max << endl;
			cout << "Best Score for English : " << b << ", " << eng_max << endl;
			cout << "Best Score for Math : " << c << ", " << math_max << endl;
			break;

		case 4: // Male student ���� ��ȯ. sex�� M(77 in ASCII)�� �л��� ã�� ������ ����ϵ��� ��
			cout << "The data for male students : " << endl;
			for (i = 0; i < 5; i++) {
				if (std[i].sex == 77) {
					cout << "student " << i << endl;
					cout << "name: " << std[i].name << " , student ID : " << std[i].id << " sex : " << std[i].sex << endl;
					cout << "kor score : " << std[i].kor << ", eng score : " << std[i].eng << "math score : " << std[i].math << endl;
				}
			}
			break;

		case 5: // Female student ���� ��ȯ. sex�� F(70 in ASCII)�� �л��� ã�� ������ ����ϵ��� ��
			cout << "The data for female students : " << endl;
			for (i = 0; i < 5; i++) {
				if (std[i].sex == 70) {
					cout << "student " << i << endl;
					cout << "name: " << std[i].name << " , student ID : " << std[i].id << " sex : " << std[i].sex << endl;
					cout << "kor score : " << std[i].kor << ", eng score : " << std[i].eng << "math score : " << std[i].math << endl;
				}
			}
			break;

		case 6: // Change ���� ��ȯ. id�� �Է¹޾� �ش� id�� �ش��ϴ� ��°�� �л� ������ �����ϵ��� �ڵ带 �ۼ���.
			cout << "Enter the student ID : " << endl;
			cin >> id_in;
			for (i = 0; i < 5; i++) {
				if (std[i].id == id_in) {
					cout << "Enter new data(name id sex korean english math)" << endl;
					cin >> std[i].name >> std[i].id >> std[i].sex >> std[i].kor >> std[i].eng >> std[i].math;
				}	
				else  break;
			}
			break;
		}
	}
}
