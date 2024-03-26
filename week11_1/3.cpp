#include <iostream>
using namespace std;
int main() {
    int i = 10000;  // 변수 i 선언 후 10000으로 초기화
    int *p, *q;     // 포인터 변수 p, q 선언

    p = &i;         // 포인터 변수에 i의 주소값을 대입
    q = &i;

    *p = *p + 1;    // 각 포인터 변수의 값에 1을 더해줌
    *q = *q + 1;

    cout << "i = " << i << endl;
    return 0;
}