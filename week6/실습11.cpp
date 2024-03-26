#include <iostream>

using namespace std;

void display();
int main() {
	cout << "main" << endl;
	display();
	return 0;
}


void display() {
	cout << "display" << endl;
	main();
}