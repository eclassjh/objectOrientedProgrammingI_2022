#include <iostream>
using namespace std;
int main() {
    int n = 10;     // 변수 n 선언
    int *m;         // 포인터변수(주소) m을 선언
    m = &n;         // 포인터변수 m에 n의 주소를 대입

    cout << "address: " << m << " value: " << *m << endl;
    // m(=주소), *m(주소에 있는 값)

    n = 100;        // n값 변경
    cout << "address: " << m << " value: " << *m << endl;
    return 0;
}