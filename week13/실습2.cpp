#include <iostream>
using namespace std;

int main(void)
{
	char* pc = NULL; // 포인터 변수 선언
	int i = 0; // 변수 선언

	//pc = (char*)malloc(100 * sizeof(char)); // C언어 (강의자료)
	pc = new char[100]; // 동적 메모리 할당

	if (pc == NULL){ // 메모리 할당에 실패하면
		cout << "memory error" << endl;
			exit(1); // 에러 출력 후 프로세스 종료
	}

	for (i = 0; i < 26; i++){ // 알파벳 26개를 메모리에 삽입
		* (pc + i) = 'a' + i;
	}

	* (pc + i) = 0;  // 메모리 마지막자리에 NULL 삽입

	cout << pc << endl;
	cout << "*pc = " << *pc << endl;    // 더이상 필요하지 않을 경우 할당된 메모리 해제

	delete[] pc;
	return 0;
}
