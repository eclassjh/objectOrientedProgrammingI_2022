#include <iostream>
using namespace std;

int main() {

    for (int j = 0; j < 100; j++) {

        cout << "step : " << j << endl;
        int n = 100000000000;
 //       int* pi = (int*)malloc(n * sizeof(int));
        int* pi = new int[n];

        if (pi == NULL) {
            cout << "memory error" << endl;
            exit(0);
        }

        for (int i = 0; i < n; i++) {
            pi[i] = i;
            // *(pi+i) = i; ���� ���� ��
            // cout << i << " - " << pi[i] << endl;
        }

 //       free(pi);
        delete(pi);
    }
    // release ���ϸ� �߰��� ����
    system("pause");
}
