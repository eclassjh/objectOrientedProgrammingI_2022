#include <iostream>
using namespace std;
int main() {
    double i;
    double *pd;

    // double 타입의 포인터 변수엔 double 타입의 변수를 사용해야 한다(같은거끼리)
    pd = &i;
    *pd = 36.5;
    cout << i << endl;

}