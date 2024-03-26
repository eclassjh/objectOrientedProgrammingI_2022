#include <iostream>
using namespace std;

void addmult(int a, int b, int* sum, int* mult) { 
	// pointer을 이용하여 2개 이상의 return값을 반환하는 함수 생성 // call by reference
	*sum = a + b;
	*mult = a * b;
	cout << "addmult()'s sum = " << *sum << ", mult = " << *mult << endl;
}
void addmult_not_pointer(int a, int b, int sum, int mult) { 
	// pointer 변수가 없이 2개 이상의 return값을 반환하도록 하는 함수 생성 시도 // call by value
	sum = a + b;
	mult = a * b;
	cout << "addmult()'s sum = " << sum << ", mult = " << mult << endl;
	cout << "addmult_not_pointer()'s sum address = " << &sum << ", mult address = " << &mult << endl;
}

int main() {
	int x = 10, y = 20;
	int s, m;
	float s_not_pointer = 0, m_not_pointer = 0;

	addmult(x, y, &s, &m);
	cout << "main()'s sum = " << s << ", mult = " << m << endl; // addmult 내부에서 실행한 값과 return되어 main함수에서 실행된 값이 동일함
	cout << "main()'s sum address = " << &s << ", mult address = " << &m << endl;

	cout << "---------------------------------------"<< endl;
	cout << "not pointer" << endl;
	addmult_not_pointer(x, y, s_not_pointer, m_not_pointer); 
	// addmult_not_pointer 안에서 실행된 연산이 main함수에는 영향을 끼치지 않음을 확인
	cout << "main()'s sum = " << s_not_pointer << ", mult = " << m_not_pointer << endl;
	cout << "main()'s sum address = " << &s_not_pointer << ", mult address = " << &m_not_pointer << endl;

	return 0;
}
