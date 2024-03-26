#include <iostream>
using namespace std;

int main(void)
{
    int* pi;
	// pi = (int*)malloc(5 * sizeof(int)); // C언어 (강의자료)
    pi = new int[5];

	if (pi == NULL) {
		cout << "메모리 할당 오류" << endl;
		exit(1);
	}
	pi[0] = 100; // *(pi+0) = 100;와 같다.
	pi[1] = 200; // *(pi+1) = 200;와 같다.
	pi[2] = 300; // *(pi+2) = 300;와 같다.
	pi[3] = 400; // *(pi+3) = 400;와 같다.
	pi[4] = 500; // *(pi+4) = 500;와 같다.

    cout << *pi << endl;
    cout << pi[0] << endl;
    cout << *(pi + 0) << endl;
    cout << *(pi + 3) << endl;

	delete (pi);

	return 0;


}
