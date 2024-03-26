#include <iostream>
#include <iomanip> // setw() 명령어의 헤더파일
using namespace std;

int main() {
    int s[3][5]; // 3*5 배열 생성
    int i, j;
    int value = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            s[i][j] = value++; // 해당 배열에 value값 대입 하고 value는 1 더하기
            cout << setw(3) << s[i][j] << " "; // 3칸에 숫자 넣어서 출력하고 한칸씩 띄어쓰기

        }
        cout << endl; // j 한바퀴 다 돌 때 (행 바뀔 때) 마다 줄 바꾸기
    }
}
