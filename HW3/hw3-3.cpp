# include <iostream>
using namespace std;

int main() {
	int s1 = 0;
	int s2 = 0;

	for (int i = 1; i <= 30; i++) {
		s1 = s1 + i ^ 2 + 1;
	}

	for (int i = 10; i <= 30; i++) {
		for (int j = 0; j <= 5; j++)
			s2 = s2 + i * j;
	}

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
}