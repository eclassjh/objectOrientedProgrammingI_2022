#include <iostream>
using namespace std;

int addmult(int ii, int jj);

void main() {
	int i = 3, j = 4;
	int k;
	k = addmult(i, j);
	cout << "k = " << k << endl;

}

int addmult(int ii, int jj) {

	int kk, ll;
	kk = ii + jj;
	ll = ii * jj;
//	return (kk, ll);
// return�� �ΰ��� �Ͼ �� ���� - pointer ����ؾ� ��
	return kk;
}