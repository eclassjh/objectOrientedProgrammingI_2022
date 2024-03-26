#include <iostream>
using namespace std;
int main() {
    char c  = 'A';      // 3개의 타입마다 선언 및 초기화
    int i = 10000;
    double d = 6.78;

    char *pc = &c;      // 위 변수의 주소로 사용할 포인터 변수 선언 및 초기화
    int *pi = &i;
    double *pd = &d;

    (*pc)++;            // 각 변수의 값에 1씩 더해줌
    *pi = *pi + 1;
    *pd += 1;

    cout << "c = " << c << endl;
    cout << "i = " << i << endl;
    cout << "d = " << d << endl;

}