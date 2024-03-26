// 지금부터 pointer

#include <iostream>
using namespace std;

int main() {

	int n = 10;
	int* pn = &n; // binding 됨. 둘이 같은 것.
	// 포인터 변수 pn과 변수 n의 주소를 binding 함

	cout <<"address : "<<  pn << ", value : "<< *pn << endl;
	// pn은 pointer 변수, 앞에 '*' 을 붙여 해당 주소 속 정보를 출력함
	cout << "address : " << &n << ", value : " << n << endl;
	// n은 일반 변수, 앞에 '&'을 붙여 해당 변수의 주소를 출력함
	// 둘이 출력값 동일함

	n = 100;
	cout << "address : " << pn << ", value : " << *pn << endl;
	// &n과 pn이 binding 되어있어 n 값을 바꾸더라도 pn의 값도 같이 바뀜
	*pn = 1000;
	cout << "address : " << &n << ", value : " << n << endl; 
	// 위와 반대의 경우에도 동일함
	
	system("pause"); // 디버깅 일시중지
}

