#include <iostream>
using namespace std;

void swap(int* px, int* py);
// call by reference swap

int main() {
    int a = 100, b = 200;
    cout << "main() a = " << a << " b = " << b << endl; // 바꾸기 전 a, b값 출력
    swap(&a, &b); // 주소 자체에서 주고받아 return값이 없더라도 swap 함수가 유효함
    cout << "main() a = " << a << " b = " << b << endl; // 바꾼 후 a, b값 출력
    return 0;
}

void swap(int* px, int* py) { // 두 정수의 주소를 받아 그 값을 바꿔주는 함수 swap 정의
    int tmp;
    cout << "before_swap() x = " << *px << " y = " << *py << endl; // 들어온 x, y 값
    tmp = *px;
    *px = *py;
    *py = tmp;
    cout << "after_swap() x = " << *px << " y = " << *py << endl; // 바뀐 후 x, y 값
}
