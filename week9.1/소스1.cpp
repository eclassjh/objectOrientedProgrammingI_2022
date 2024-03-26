#include <iostream>
const int SIZE = 5;
using namespace std;

int main() {
	int data[SIZE]; // 5칸짜리 배열 data 생성
	int i;
	
	for (i = 0; i < SIZE; i++) { // SIZE 개수만큼 정수 입력
		cout << i+1 <<"번째 정수를 입력하시오 : ";
		cin >> data[i];
	}

	for (i = SIZE - 1; i >= 0; i--) { // 배열 끝 정보부터 차례로 출력
		cout << data[i] << endl;
	}
	return 0;
}