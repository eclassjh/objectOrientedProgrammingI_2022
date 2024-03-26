#include <iostream>
using namespace std;

int main() {

	char* pc = NULL; // 포인터 변수 선언

//	pc = (char*)malloc(sizeof(char)); // C언어 (강의자료)
	pc = new char[1]; // 동적 메모리 할당
	if (pc == NULL) // 메모리 할당에 실패하면 error출력 후 프로세스 종료
	{
		cout << "MEMORY ALLOCATION ERROR" << endl;
		exit(1);
	}
	* pc = 'm'; // 할당된 메모리에 'm' 삽입
	cout << "*pc = " << *pc << endl;
	delete(pc); // 더이상 필요 없는 경우 할당된 메모리 해제
	
	return 0;
}
