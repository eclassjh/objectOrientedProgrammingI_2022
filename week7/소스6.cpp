#include <iostream>
#define SIZE 5

using namespace std;

int main() {
	int array[SIZE] = { 1,2,3,4,5 };

	for (int i = 0; i <= SIZE; i++)
		cout << "array[" << i << "] = " << array[i] << endl;

	//array[6] 일때의 값을 선언하지 않았기 때문에 쓰레기값 출력됨
	return 0;
}