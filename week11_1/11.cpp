#include <iostream>
using namespace std;
#pragma pack(8) // default
union test {
    int a;          // 4byte
    double b;       // 8byte
    char name[9];   // 9byte
    // 메모리 공유
};
struct test1 {      // 순서대로 잘 된다.
    double a;       // 8
    char b;         // 1
    short c;        // 2
    int d;          // 4
    // aaaaaaaa  bccdddd()
};
struct test2 {      
    // 얜 char을 넣고 double을 넣으려니 pack(8)이기 때문에 다 못 채우고 새로운 8칸을 만들어버림
    char a;         // 1
    double b;       // 8
    short c;        // 2
    int d;          // 4
    // a()()()()()()()  bbbbbbbb  ccdddd()()
};
int main() {
    test i = {0};
    test1 t1 = {0};
    test2 t2 = {0};
    cout << sizeof(i) << " " << sizeof(t1) << " " << sizeof(t2) << endl;
    return 0;
}