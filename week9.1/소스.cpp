#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int s[6][3][5]; // 6x3x5 3차원 배열 선언
    int i, j, z;
    int value = 1;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 3; j++) {
            for (z = 0; z < 5; z++) {
                s[i][j][z] = value++;
                cout << setw(3) << s[i][j][z] << " ";
            }
            cout << endl;
        }
    }
}