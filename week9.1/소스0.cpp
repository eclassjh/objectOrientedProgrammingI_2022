#include <iostream>
#include <iomanip> // setw() ��ɾ��� �������
using namespace std;

int main() {
    int s[3][5]; // 3*5 �迭 ����
    int i, j;
    int value = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            s[i][j] = value++; // �ش� �迭�� value�� ���� �ϰ� value�� 1 ���ϱ�
            cout << setw(3) << s[i][j] << " "; // 3ĭ�� ���� �־ ����ϰ� ��ĭ�� ����

        }
        cout << endl; // j �ѹ��� �� �� �� (�� �ٲ� ��) ���� �� �ٲٱ�
    }
}
