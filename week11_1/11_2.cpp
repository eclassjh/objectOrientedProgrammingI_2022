#include <iostream>
using namespace std;
#pragma pack(2) // default
union test {
    int a;          // 4byte
    double b;       // 8byte
    char name[9];   // 9byte
    // 메모리 공유
};
struct test1 {
    double a;       // 8
    char b;         // 1
    short c;        // 2
    int d;          // 4
    // aa aa aa aa b() cc dd dd
};
struct test2 {      
    char a;         // 1
    double b;       // 8
    short c;        // 2
    int d;          // 4
    // a() bb bb bb bb cc dd dd
};
int main() {
    test i = {0};
    test1 t1 = {0};
    test2 t2 = {0};
    cout << sizeof(i) << " " << sizeof(t1) << " " << sizeof(t2) << endl;
    return 0;
}