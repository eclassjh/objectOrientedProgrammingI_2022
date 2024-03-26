#include <iostream>
using namespace std;
typedef struct point {  // struct point와 동일한 type의 POINT 선언
    int x;
    int y;
} POINT;
POINT translate(POINT p, POINT delta);
int main() {
    POINT p = {2, 3};
    POINT delta = {10, 10};
    POINT result;
    result = translate(p, delta);
    cout << "new point: " << result.x << " , " << result.y << endl;
}
POINT translate(POINT p, POINT delta) {
    POINT new_p;
    new_p.x = p.x + delta.x;
    new_p.y = p.y + delta.y;
    return new_p;
}