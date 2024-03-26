#include <iostream>
#include <string> // struct 속 문자형 형식에서 바로 대입할 수 있도록 헤더파일 선언
using namespace std;

struct student { // 학생 정보 입력에 필요한 변수 선언
	char name[20];
	int id;
	char sex;
	int kor, eng, math;
};
void main() {
	struct student std[5]; // 5 students
	int mode; // 1~6번 mode 중에 선택한 값을 저장하는 변수
	int i;

	int kor_max = 0, eng_max = 0, math_max = 0; // 3번 case에서 사용하기 위한 변수 선언
	int a = 0, b = 0, c = 0;

	int id_in; // 6번 case에서 사용하기 위한 변수 선언

	for(;;) // mode 선택 무한 loop 생성
	{
		cout << " Selct the mode. " << endl;
		cout << "1. Load   2. Show   3. Best score   4. Male students   5. Female students   6. Change " << endl;
		cin >> mode;

		switch (mode) {

		case 1: // Load 모드로 전환. 학생별 data를 입력받음
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

		case 2: // Show 모드로 전환. 입력받은 data를 출력함
			cout << "now displaying the students : " << endl;
			for (i = 0; i < 5; i++) { // 반복문을 사용하여 학생들의 모든 정보를 출력함
				cout << "student " << i << endl;
				cout << "name: " << std[i].name << " , student ID : " << std[i].id << " sex : " << std[i].sex << endl;
				cout << "kor score : " << std[i].kor << ", eng score : " << std[i].eng << "math score : " << std[i].math << endl;
			}
			break;

		case 3: // Best score 모드로 전환. 각 과목별 최고 성적을 과목_max 변수에 저장하고 해당하는 학생의 순번을 각각 a,b,c 변수에 지정함
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
			// 반복문을 통해 저장된 최고값과 해당하는 학생명을 출력함
			cout << "Best Score for Korean : " << a << ", " << kor_max << endl;
			cout << "Best Score for English : " << b << ", " << eng_max << endl;
			cout << "Best Score for Math : " << c << ", " << math_max << endl;
			break;

		case 4: // Male student 모드로 전환. sex가 M(77 in ASCII)인 학생을 찾아 정보를 출력하도록 함
			cout << "The data for male students : " << endl;
			for (i = 0; i < 5; i++) {
				if (std[i].sex == 77) {
					cout << "student " << i << endl;
					cout << "name: " << std[i].name << " , student ID : " << std[i].id << " sex : " << std[i].sex << endl;
					cout << "kor score : " << std[i].kor << ", eng score : " << std[i].eng << "math score : " << std[i].math << endl;
				}
			}
			break;

		case 5: // Female student 모드로 전환. sex가 F(70 in ASCII)인 학생을 찾아 정보를 출력하도록 함
			cout << "The data for female students : " << endl;
			for (i = 0; i < 5; i++) {
				if (std[i].sex == 70) {
					cout << "student " << i << endl;
					cout << "name: " << std[i].name << " , student ID : " << std[i].id << " sex : " << std[i].sex << endl;
					cout << "kor score : " << std[i].kor << ", eng score : " << std[i].eng << "math score : " << std[i].math << endl;
				}
			}
			break;

		case 6: // Change 모드로 전환. id를 입력받아 해당 id에 해당하는 번째의 학생 정보를 갱신하도록 코드를 작성함.
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
