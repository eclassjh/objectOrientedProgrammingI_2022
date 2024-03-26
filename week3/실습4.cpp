#include <iostream>

using namespace std;

int main() {
	char x; // x (char) : -128 ~ 127 로 선언됨
	
	for (x = 0; x < 127; x++) { // x 범위를 x < 127로 수정 , 이보다 범위가 클 경우 무한 loop 발생
		cout << "ASCII Value : " << int(x) << ", Character : " << x << endl;
	}
	return 0;
} 