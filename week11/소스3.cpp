#include <iostream>
using namespace std;

// n의 datatype을 double로 바꿔서 주소값 비교해보면
// 1을 더했을 때 단순히 1만큼의 주소가 커지는게 아니라 datatype만큼의 byte에 따라 커짐

int main() {
	int n = 10;
	int* pn = &n; // binding 됨. pn = n의 주소

	int m = 10;
	int* pm = &m; // binding 됨. pm = m의 주소

	(*pn)++; // pn의 값에 + 1 ( = n + 1 )
	*pm += 1; // pm의 값에 + 1 ( = m + 1 )

	cout << "n = " << n << endl; // n = 11
	cout << "m = " << m << endl; // n = 11
	
	cout << pn << ", " << *pn << endl; // pn(n의 주솟값) 출력
	cout << ++pn << endl; // pn에서 1 더한 주솟값 출력 (n이 int type -> 4만큼 증가)
	// Binding 해제 ??
	
	cout << *(pn++) << endl; // 쓰레기값 출력 (지정한 적 없기 때문)
	cout << pn << endl;

	cout << &n << endl;

}

