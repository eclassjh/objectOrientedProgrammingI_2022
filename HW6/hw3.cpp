#include <iostream>
using namespace std;

void sum(int x); // sum �Լ� prototype ����, with arguments and no return value

int main() { 
	sum(100);
} // 1���� 100���� Ȧ����, ¦����, ��ü���� ����ϴ� sum�Լ� ����

void sum(int x) { // sum �Լ� ����
	int i, odd = 0, even = 0 , sum_all = 0; // i, odd, even, sum_all ���� ����
	for (i = 1; i <= x; i++) { // 1���� x���� i �ϳ��� ������Ű�� �ݺ�
		sum_all += i; // sum_all�� ��� i ���ϱ�
		if (i % 2 == 1) // i�� Ȧ���� ��쿡�� odd�� i ���ϱ�
			odd += i;
		else // i�� ¦���� ��쿡�� even�� i ���ϱ�
			even += i;
	}
	cout << "Ȧ�� �� : " << odd << endl;
	cout << "¦�� �� : " << even << endl;
	cout << "��ü �� : " << sum_all << endl;
	// �ݺ����� ���� �� �ᱣ�� ���
}
