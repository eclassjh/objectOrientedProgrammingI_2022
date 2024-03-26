#include <iostream>
using namespace std;

void sum(int x); // sum 함수 prototype 선언, with arguments and no return value

int main() { 
	sum(100);
} // 1부터 100까지 홀수합, 짝수합, 전체합을 출력하는 sum함수 실행

void sum(int x) { // sum 함수 정의
	int i, odd = 0, even = 0 , sum_all = 0; // i, odd, even, sum_all 변수 정의
	for (i = 1; i <= x; i++) { // 1부터 x까지 i 하나씩 증가시키며 반복
		sum_all += i; // sum_all는 모든 i 더하기
		if (i % 2 == 1) // i가 홀수일 경우에는 odd에 i 더하기
			odd += i;
		else // i가 짝수일 경우에는 even에 i 더하기
			even += i;
	}
	cout << "홀수 합 : " << odd << endl;
	cout << "짝수 합 : " << even << endl;
	cout << "전체 합 : " << sum_all << endl;
	// 반복문이 끝난 후 결괏값 출력
}
