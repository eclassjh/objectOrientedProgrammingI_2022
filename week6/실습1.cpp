#include <iostream>
using namespace std;

int global;
int main() {
	global = 0;
	int local = 2;
	{
		int very_local;
		very_local = global + local;
		cout << very_local << endl;
	}
	return 0;
}