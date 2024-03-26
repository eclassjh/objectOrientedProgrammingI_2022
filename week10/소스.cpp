#include <iostream>
#include <string>
using namespace std;

struct student {
	int number;
	//char name[10];
	// string 헤더 추가해서 이것도 가능함
	string name; // => string 형식으로 선언되면 strcpy말고 line 19 가능
	double height;

};

int main() {
	struct student s = { 1,"kim",178.9 }; // struct 생략 가능

	// 방법 1 : 하나하나 수정하기
	s.number = 12210000; // 가능
	s.name = "Lee"; // 가능하게 하려면 string 헤더파일 선언해야함
//	strcpy(s.name, "Lee"); // strcpy 쓰려면 소스파일 -> 속성 전처리를 정의해줘야함 "_CRT_SECURE_NO_WARNINGS"
//	strcpy_s(s.name,sizeof(s.name), "kim");
//16,17 둘 중 하나

	// 방법 2: 한번에 수정하기
	s = { 12210000, "댕댕이", 170.2 };


	cout << "number : " << s.number <<  endl;
	cout << "name : " << s.name << endl;
	cout << "height : " << s.height << endl;
}