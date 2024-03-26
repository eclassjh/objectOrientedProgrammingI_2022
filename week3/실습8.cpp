#include <iostream>

using namespace std;

int main() {

	int i = 10;

	while (i == 10) { // = 는 대입기호, == 가 비교기호
		i = i + 1;
		cout << "i = " << i << endl;
	}
	return 0;
}