#include <iostream>
using namespace std;

void swap(int* px, int* py);
// call by reference swap

int main() {
    int a = 100, b = 200;
    cout << "main() a = " << a << " b = " << b << endl; // �ٲٱ� �� a, b�� ���
    swap(&a, &b); // �ּ� ��ü���� �ְ�޾� return���� ������ swap �Լ��� ��ȿ��
    cout << "main() a = " << a << " b = " << b << endl; // �ٲ� �� a, b�� ���
    return 0;
}

void swap(int* px, int* py) { // �� ������ �ּҸ� �޾� �� ���� �ٲ��ִ� �Լ� swap ����
    int tmp;
    cout << "before_swap() x = " << *px << " y = " << *py << endl; // ���� x, y ��
    tmp = *px;
    *px = *py;
    *py = tmp;
    cout << "after_swap() x = " << *px << " y = " << *py << endl; // �ٲ� �� x, y ��
}
