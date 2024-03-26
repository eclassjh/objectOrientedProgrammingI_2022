#include <iostream>
#include <time.h>

using namespace std;

void main() {
	time_t a = time(NULL());
	for (int x = 0; x < 1000000000; x++) {}
	time_t b = time(NULL());
	cout << fixed;
	cout.precision(6);
	float t = b - a;
	cout << "processing time = " << b - a << endl;
}