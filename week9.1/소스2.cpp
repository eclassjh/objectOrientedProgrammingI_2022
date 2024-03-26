#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE = 6;

int main() {
	int freq[SIZE] = { 0 }; // 6칸짜리 배열에 모두 0 대입
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 10000; i++) // 10000번 반복
		++freq[rand() % 6]; // 랜덤값 에서 해당 나머지가 몇번이 나왔는지
	cout << "============" << endl;
	cout << "  면  빈도   " << endl;
	cout << "============" << endl;
	for (i = 0; i < SIZE; i++)
		cout << " " << setw(3) << i + 1 << "  " << setw(3) << freq[i] << endl;
	return 0;
}