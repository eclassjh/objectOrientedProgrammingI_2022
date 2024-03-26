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
// return이 두개가 일어날 수 없음 - pointer 사용해야 함
	return kk;
}